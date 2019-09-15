/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVideoWidget *playwidget;
    QWidget *widget_2;
    QLabel *label_all;
    QSlider *horizontalSlider;
    QGroupBox *groupBox;
    QListView *filelist;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *btn_open;
    QSpacerItem *horizontalSpacer;
    QToolButton *btn_last;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btn_play;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *btn_next;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *btn_volume;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1292, 686);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        playwidget = new QVideoWidget(Widget);
        playwidget->setObjectName(QString::fromUtf8("playwidget"));
        playwidget->setGeometry(QRect(40, 50, 891, 411));
        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(60, 530, 581, 61));
        label_all = new QLabel(widget_2);
        label_all->setObjectName(QString::fromUtf8("label_all"));
        label_all->setGeometry(QRect(470, 20, 71, 21));
        horizontalSlider = new QSlider(widget_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(0, 20, 461, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(1090, 40, 201, 631));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        groupBox->setFont(font);
        filelist = new QListView(groupBox);
        filelist->setObjectName(QString::fromUtf8("filelist"));
        filelist->setGeometry(QRect(10, 20, 181, 591));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 610, 438, 58));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        btn_open = new QToolButton(widget);
        btn_open->setObjectName(QString::fromUtf8("btn_open"));
        btn_open->setMinimumSize(QSize(40, 40));
        btn_open->setMaximumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_open->setIcon(icon1);
        btn_open->setIconSize(QSize(40, 40));
        btn_open->setAutoRaise(true);

        horizontalLayout->addWidget(btn_open);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_last = new QToolButton(widget);
        btn_last->setObjectName(QString::fromUtf8("btn_last"));
        btn_last->setMinimumSize(QSize(40, 40));
        btn_last->setMaximumSize(QSize(40, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_last->setIcon(icon2);
        btn_last->setIconSize(QSize(40, 40));
        btn_last->setAutoRaise(true);

        horizontalLayout->addWidget(btn_last);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_play = new QToolButton(widget);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));
        btn_play->setMinimumSize(QSize(40, 40));
        btn_play->setMaximumSize(QSize(40, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_play->setIcon(icon3);
        btn_play->setIconSize(QSize(40, 40));
        btn_play->setCheckable(false);
        btn_play->setAutoRaise(true);

        horizontalLayout->addWidget(btn_play);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_next = new QToolButton(widget);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setMinimumSize(QSize(40, 40));
        btn_next->setMaximumSize(QSize(40, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_next->setIcon(icon4);
        btn_next->setIconSize(QSize(40, 40));
        btn_next->setAutoRaise(true);

        horizontalLayout->addWidget(btn_next);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btn_volume = new QToolButton(widget);
        btn_volume->setObjectName(QString::fromUtf8("btn_volume"));
        btn_volume->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_volume->sizePolicy().hasHeightForWidth());
        btn_volume->setSizePolicy(sizePolicy);
        btn_volume->setMinimumSize(QSize(40, 40));
        btn_volume->setMaximumSize(QSize(40, 40));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/volume.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_volume->setIcon(icon5);
        btn_volume->setIconSize(QSize(40, 40));
        btn_volume->setAutoRaise(true);

        horizontalLayout->addWidget(btn_volume);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250_by viayie", nullptr));
        label_all->setText(QApplication::translate("Widget", "00:00/00:00", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\346\226\207\344\273\266\345\210\227\350\241\250", nullptr));
        btn_open->setText(QApplication::translate("Widget", "...", nullptr));
        btn_last->setText(QApplication::translate("Widget", "...", nullptr));
        btn_play->setText(QApplication::translate("Widget", "...", nullptr));
        btn_next->setText(QApplication::translate("Widget", "...", nullptr));
        btn_volume->setText(QApplication::translate("Widget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
