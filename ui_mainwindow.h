/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *Lbl_date;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Lbl_time;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *Sbox_yearsh;
    QLabel *label;
    QSpinBox *Sbox_monthsh;
    QLabel *label_2;
    QSpinBox *Sbox_daysh;
    QPushButton *Btn_Calculateshtomi;
    QSpacerItem *horizontalSpacer_5;
    QLabel *Lbl_MiOut;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *Sbox_yearmi;
    QLabel *label_3;
    QSpinBox *Sbox_monthmi;
    QLabel *label_4;
    QSpinBox *Sbox_daymi;
    QPushButton *Btn_Calculatemitosh;
    QSpacerItem *horizontalSpacer_6;
    QLabel *Lbl_shOut;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(586, 398);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        Lbl_date = new QLabel(centralWidget);
        Lbl_date->setObjectName(QString::fromUtf8("Lbl_date"));

        horizontalLayout_3->addWidget(Lbl_date);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        Lbl_time = new QLabel(centralWidget);
        Lbl_time->setObjectName(QString::fromUtf8("Lbl_time"));

        horizontalLayout_4->addWidget(Lbl_time);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        Sbox_yearsh = new QSpinBox(centralWidget);
        Sbox_yearsh->setObjectName(QString::fromUtf8("Sbox_yearsh"));
        Sbox_yearsh->setMinimum(1300);
        Sbox_yearsh->setMaximum(1400);

        horizontalLayout_5->addWidget(Sbox_yearsh);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        Sbox_monthsh = new QSpinBox(centralWidget);
        Sbox_monthsh->setObjectName(QString::fromUtf8("Sbox_monthsh"));
        Sbox_monthsh->setMinimum(1);
        Sbox_monthsh->setMaximum(12);

        horizontalLayout_5->addWidget(Sbox_monthsh);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        Sbox_daysh = new QSpinBox(centralWidget);
        Sbox_daysh->setObjectName(QString::fromUtf8("Sbox_daysh"));
        Sbox_daysh->setMinimum(1);
        Sbox_daysh->setMaximum(31);

        horizontalLayout_5->addWidget(Sbox_daysh);

        Btn_Calculateshtomi = new QPushButton(centralWidget);
        Btn_Calculateshtomi->setObjectName(QString::fromUtf8("Btn_Calculateshtomi"));

        horizontalLayout_5->addWidget(Btn_Calculateshtomi);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        Lbl_MiOut = new QLabel(centralWidget);
        Lbl_MiOut->setObjectName(QString::fromUtf8("Lbl_MiOut"));
        Lbl_MiOut->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(Lbl_MiOut);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Sbox_yearmi = new QSpinBox(centralWidget);
        Sbox_yearmi->setObjectName(QString::fromUtf8("Sbox_yearmi"));
        Sbox_yearmi->setMinimum(1900);
        Sbox_yearmi->setMaximum(2100);

        horizontalLayout_2->addWidget(Sbox_yearmi);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        Sbox_monthmi = new QSpinBox(centralWidget);
        Sbox_monthmi->setObjectName(QString::fromUtf8("Sbox_monthmi"));
        Sbox_monthmi->setMinimum(1);
        Sbox_monthmi->setMaximum(12);

        horizontalLayout_2->addWidget(Sbox_monthmi);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        Sbox_daymi = new QSpinBox(centralWidget);
        Sbox_daymi->setObjectName(QString::fromUtf8("Sbox_daymi"));
        Sbox_daymi->setMinimum(1);
        Sbox_daymi->setMaximum(31);

        horizontalLayout_2->addWidget(Sbox_daymi);

        Btn_Calculatemitosh = new QPushButton(centralWidget);
        Btn_Calculatemitosh->setObjectName(QString::fromUtf8("Btn_Calculatemitosh"));

        horizontalLayout_2->addWidget(Btn_Calculatemitosh);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        Lbl_shOut = new QLabel(centralWidget);
        Lbl_shOut->setObjectName(QString::fromUtf8("Lbl_shOut"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        Lbl_shOut->setFont(font);
        Lbl_shOut->setLayoutDirection(Qt::RightToLeft);
        Lbl_shOut->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Lbl_shOut->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(Lbl_shOut);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_9->addItem(verticalSpacer);


        verticalLayout->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 586, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Lbl_date->setText(QApplication::translate("MainWindow", "Date", nullptr));
        Lbl_time->setText(QApplication::translate("MainWindow", "Time", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\330\264\331\205\330\263\333\214 \330\254\331\204\330\247\331\204\333\214 \330\250\331\207 \331\205\333\214\331\204\330\247\330\257\333\214 : ", nullptr));
        label->setText(QApplication::translate("MainWindow", "/", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "/", nullptr));
        Btn_Calculateshtomi->setText(QApplication::translate("MainWindow", "\331\205\330\255\330\247\330\263\330\250\331\207", nullptr));
        Lbl_MiOut->setText(QApplication::translate("MainWindow", "----/--/--", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\331\205\333\214\331\204\330\247\330\257\333\214 \330\250\331\207 \330\264\331\205\330\263\333\214 \330\254\331\204\330\247\331\204\333\214 : ", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "/", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "/", nullptr));
        Btn_Calculatemitosh->setText(QApplication::translate("MainWindow", "\331\205\330\255\330\247\330\263\330\250\331\207", nullptr));
        Lbl_shOut->setText(QApplication::translate("MainWindow", "----/--/--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
