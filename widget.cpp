#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QString>
#include <QTime>
#include <QDir>
#include <QStandardItemModel>
#include <QtWin>
#include <QDebug>
#include <QToolButton>
//#include <QApplication>
//#include <QDesktopWidget>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /*设置主界面背景*/
//    QPixmap pixmap(":/images/background.jpg");
//    QPalette palette;
//    palette.setBrush(backgroundRole(), QBrush(pixmap));
//    setPalette(palette);

    //创建mediaPlayer
    mediaPlayer = new QMediaPlayer(this);
    //设置对应mediaPlayer的QVideoWidget
    mediaPlayer->setVideoOutput(ui->playwidget);

    //设置播放属性
    //1、监听播放信号变化函数
    connect(mediaPlayer, SIGNAL(stateChanged(QMediaPlayer::State)), this, SLOT(mediaStateChanged(QMediaPlayer::State)));
    //2、播放进度信号变化函数
    connect(mediaPlayer, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    //3、播放长度信号变化
    connect(mediaPlayer, SIGNAL(durationChanged(qint64)), this, SLOT(durationChanged(qint64)));
    //4、设置播放错误关联
    connect(mediaPlayer, SIGNAL(error(QMediaPlayer::Error)), this, SLOT(handleERR()));

    //设置播放按钮
    ui->btn_play->setToolTip("播放");
    //设置点击状态
    ui->btn_play->setEnabled(false);

    //设置打开文件按钮
    ui->btn_open->setToolTip("打开");

    ui->btn_last->setToolTip("上一个");
    ui->btn_last->setEnabled(false);
    ui->btn_next->setToolTip("下一个");
    ui->btn_next->setEnabled(false);

    //
    ui->horizontalSlider->setEnabled(false);

    //设置列表不可编辑
    ui->filelist->setEditTriggers(QAbstractItemView::NoEditTriggers);

    model = new QStandardItemModel(this);
    strListName.clear();
    strUrlName.clear();

    //音量滑动条
    slider_volume = new QSlider(this);
    slider_volume->setOrientation(Qt::Vertical);
    slider_volume->setEnabled(false);
    slider_volume->hide();
    connect(slider_volume, &QSlider::sliderMoved, this, &Widget::slider_volume_changed);
    state_slider_volume = false;
    mediaPlayer->setVolume(50);
    QString str_volume = "音量:" + QString::number(mediaPlayer->volume());
    ui->btn_volume->setToolTip(str_volume);
    connect(mediaPlayer, &QMediaPlayer::volumeChanged, this, &Widget::set_btn_volume_tooltip);
}

Widget::~Widget()
{
    delete ui;
}

/**/
void Widget::play()
{
    //获取播放状态
    switch (mediaPlayer->state()) {
    case QMediaPlayer::PlayingState:
        mediaPlayer->pause();
        break;
    default:
        mediaPlayer->play();
        break;
    }
}

/*播放过程中动态调整播放进度*/
void Widget::mediaStateChanged(QMediaPlayer::State state)
{
    switch (state) {
    case QMediaPlayer::PlayingState:
        ui->btn_play->setToolTip("暂停");
        ui->btn_play->setIcon(QPixmap(":/images/pause.png"));
        break;
    default:
        ui->btn_play->setToolTip("播放");
        ui->btn_play->setIcon(QPixmap(":/images/play.png"));
        break;
    }
}

/*改变播放位置*/
void Widget::positionChanged(qint64 position)
{
    ui->horizontalSlider->setValue(position);
    QTime time = QTime(0, position/1000/60, position/1000%60, position%1000);
    QString str = time.toString("mm:ss");
    str += "/"+total;
    ui->label_all->setText(str);
}

/*获取进度条调整位置位置*/
void Widget::setPosition(int position)
{
    mediaPlayer->setPosition(position);
}

/*设置进度条范围*/
void Widget::durationChanged(qint64 duration)
{
    ui->horizontalSlider->setRange(0, duration);
    QTime time = QTime(0, duration/1000/60, duration/1000%60, duration%1000);
    total = time.toString("mm:ss");
}

void Widget::handleERR()
{
    ui->btn_play->setEnabled(false);
}

//音量控制Slider的槽函数
void Widget::slider_volume_changed()
{
    mediaPlayer->setVolume(slider_volume->value());
}

//音量按钮的tooltip接收音量变化
void Widget::set_btn_volume_tooltip()
{
    QString str_volume = "音量:" + QString::number(mediaPlayer->volume());
    ui->btn_volume->setToolTip(str_volume);
}

//播放按钮
void Widget::on_btn_play_clicked()
{
    play();

//    //设置按钮暂停样式
//    ui->btn_play->setToolTip("暂停");
//    ui->btn_play->setIcon(QPixmap(":/images/pause.png"));
}


void Widget::on_horizontalSlider_sliderMoved(int position)
{
    setPosition(position);//由进度条来调整播放进度
}

void Widget::on_btn_open_clicked()
{
//    QString filename = QFileDialog::getOpenFileName();
//    //设置播放内容
//    mediaPlayer->setMedia(QUrl::fromLocalFile(filename));

    strListName.clear();
    strUrlName.clear();
    model->clear();
    mediaPlayer->pause();

    QString dirname = QFileDialog::getExistingDirectory(this, tr("open Directory", "."));
    QDir dir(dirname);
    dir.setNameFilters(QStringList("*.mp4"));
    strListName = dir.entryList();//获取文件名列表
    QString strPathName = dir.absolutePath();//获取目录路径
    count = strListName.count();//获取文件个数

    for(int i=0; i<count; ++i){
        QStandardItem *item = new QStandardItem(strListName.at(i));
        model->appendRow(item);
        strUrlName.append(strPathName + "/" + strListName.at(i));
    }
    ui->filelist->setModel(model);
}

//播放列表双击
void Widget::on_filelist_doubleClicked(const QModelIndex &index)
{
    mediaPlayer->pause();

    mediaPlayer->setMedia(QUrl::fromLocalFile(strUrlName.at(index.row())));

    nowindex = index.row();
    mediaPlayer->play();

    this->setWindowTitle(strListName.at(index.row()));

    ui->btn_play->setEnabled(true);
    ui->horizontalSlider->setEnabled(true);
    ui->btn_last->setEnabled(true);
    ui->btn_next->setEnabled(true);
}

//上一个
void Widget::on_btn_last_clicked()
{
    mediaPlayer->pause();

    nowindex -= 1;
    if(nowindex < 0){
        nowindex = count-1;
    }

    mediaPlayer->setMedia(QUrl::fromLocalFile(strUrlName.at(nowindex)));

    mediaPlayer->play();
    this->setWindowTitle(strListName.at(nowindex));
}

//下一个
void Widget::on_btn_next_clicked()
{
    mediaPlayer->pause();

    nowindex += 1;
    if(nowindex == count){
        nowindex = 0;
    }

    mediaPlayer->setMedia(QUrl::fromLocalFile(strUrlName.at(nowindex)));

    mediaPlayer->play();
    this->setWindowTitle(strListName.at(nowindex));
}

void Widget::on_btn_volume_clicked()
{
    if(state_slider_volume){
        slider_volume->hide();
        qDebug() << "slider_volume->hide()";
    }
    else{
        slider_volume->setEnabled(true);
        slider_volume->setValue(mediaPlayer->volume());
        slider_volume->setGeometry(ui->btn_volume->x()+ui->widget->x()+14, ui->widget->y()-ui->btn_volume->y()-65, 15, 80);
        slider_volume->show();
        qDebug() << "slider_volume->show()";
    }
    state_slider_volume = !state_slider_volume;
}
