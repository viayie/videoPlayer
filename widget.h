#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QString>
#include <QStandardItemModel>
#include <QSlider>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btn_play_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_btn_open_clicked();

    void on_filelist_doubleClicked(const QModelIndex &index);

    void on_btn_last_clicked();

    void on_btn_next_clicked();

    void on_btn_volume_clicked();

private:
    Ui::Widget *ui;

    //
    QMediaPlayer *mediaPlayer;//QVideoWidegt中播放

private:
    //播放
    void play();

    //视频总时长
    QString total;

    //列表中文件数
    int count;
    //当前播放文件对应的播放列表中的下标
    int nowindex;

    QStringList strListName;//文件名称对应列表
    QStringList strUrlName;//文件路径对应列表
    QStandardItemModel *model;//数据模型

    QSlider *slider_volume;
    bool state_slider_volume;

public slots:
    //获取当前播放状态
    void mediaStateChanged(QMediaPlayer::State state);
    //改变播放位置
    void positionChanged(qint64 position);
    //获取播放位置
    void setPosition(int position);
    //播放长度
    void durationChanged(qint64 duration);

    //播放异常的抛出
    void handleERR();

    void slider_volume_changed();

    void set_btn_volume_tooltip();

};

#endif // WIDGET_H



































