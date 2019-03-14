/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QLabel *label_9;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QGroupBox *groupBox_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *tab_3;
    QGroupBox *groupBox_5;
    QComboBox *taskListcomboBox;
    QPushButton *taskStartButton;
    QPushButton *taskEndButton;
    QLabel *label_10;
    QLineEdit *startTasklineEdit;
    QGroupBox *groupBox_3;
    QPushButton *getGamePathButton;
    QPushButton *gameStartBt;
    QLineEdit *gamePath;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 516);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 80, 461, 391));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(220, 10, 231, 171));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 20, 41, 16));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(70, 20, 41, 16));
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(120, 20, 41, 16));
        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(170, 20, 41, 16));
        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(20, 40, 41, 16));
        checkBox_6 = new QCheckBox(groupBox);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(70, 40, 41, 16));
        checkBox_7 = new QCheckBox(groupBox);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(120, 40, 41, 16));
        checkBox_8 = new QCheckBox(groupBox);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(170, 40, 41, 16));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 70, 54, 12));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(80, 70, 31, 16));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(130, 70, 31, 16));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(180, 70, 31, 16));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(220, 190, 231, 171));
        checkBox_9 = new QCheckBox(groupBox_2);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(20, 20, 91, 16));
        checkBox_10 = new QCheckBox(groupBox_2);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(20, 40, 91, 16));
        checkBox_11 = new QCheckBox(groupBox_2);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setGeometry(QRect(20, 60, 61, 16));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 201, 351));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 54, 12));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 40, 54, 12));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 40, 54, 12));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 70, 54, 12));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 100, 54, 12));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 130, 54, 12));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 160, 54, 12));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 130, 54, 12));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(220, 10, 231, 111));
        taskListcomboBox = new QComboBox(groupBox_5);
        taskListcomboBox->setObjectName(QString::fromUtf8("taskListcomboBox"));
        taskListcomboBox->setGeometry(QRect(10, 20, 211, 22));
        taskStartButton = new QPushButton(groupBox_5);
        taskStartButton->setObjectName(QString::fromUtf8("taskStartButton"));
        taskStartButton->setGeometry(QRect(10, 80, 75, 23));
        taskEndButton = new QPushButton(groupBox_5);
        taskEndButton->setObjectName(QString::fromUtf8("taskEndButton"));
        taskEndButton->setGeometry(QRect(140, 80, 81, 23));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 50, 61, 16));
        startTasklineEdit = new QLineEdit(groupBox_5);
        startTasklineEdit->setObjectName(QString::fromUtf8("startTasklineEdit"));
        startTasklineEdit->setEnabled(false);
        startTasklineEdit->setGeometry(QRect(70, 50, 151, 20));
        tabWidget->addTab(tab_3, QString());
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 461, 51));
        getGamePathButton = new QPushButton(groupBox_3);
        getGamePathButton->setObjectName(QString::fromUtf8("getGamePathButton"));
        getGamePathButton->setGeometry(QRect(290, 10, 75, 31));
        gameStartBt = new QPushButton(groupBox_3);
        gameStartBt->setObjectName(QString::fromUtf8("gameStartBt"));
        gameStartBt->setGeometry(QRect(370, 10, 75, 31));
        gamePath = new QLineEdit(groupBox_3);
        gamePath->setObjectName(QString::fromUtf8("gamePath"));
        gamePath->setGeometry(QRect(10, 9, 271, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\207\252\345\212\250\351\207\207\351\233\206", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "1\347\272\277", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "2\347\272\277", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "3\347\272\277", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "4\347\272\277", nullptr));
        checkBox_5->setText(QApplication::translate("MainWindow", "5\347\272\277", nullptr));
        checkBox_6->setText(QApplication::translate("MainWindow", "6\347\272\277", nullptr));
        checkBox_7->setText(QApplication::translate("MainWindow", "7\347\272\277", nullptr));
        checkBox_8->setText(QApplication::translate("MainWindow", "8\347\272\277", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225\344\272\272\347\211\251\357\274\232", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\345\267\246", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\344\270\255", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "\345\217\263", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\217\230\346\200\201\345\212\237\350\203\275", nullptr));
        checkBox_9->setText(QApplication::translate("MainWindow", "\345\210\267\351\223\266\351\271\244\345\205\263\345\256\210\345\215\253", nullptr));
        checkBox_10->setText(QApplication::translate("MainWindow", "\345\210\267\351\207\221\351\271\244\345\205\263\345\256\210\345\215\253", nullptr));
        checkBox_11->setText(QApplication::translate("MainWindow", "\345\210\267\345\256\235\347\256\261", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\345\237\272\347\241\200\345\261\236\346\200\247", nullptr));
        label->setText(QApplication::translate("MainWindow", "\344\272\272\347\211\251\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "HP\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "MP\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\347\273\217\351\252\214\357\274\232", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\256\240\347\211\251\357\274\232", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "HP\357\274\232", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\345\201\245\345\272\267\357\274\232", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "MP\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\237\272\346\234\254\350\256\276\347\275\256", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\345\210\267\344\273\273\345\212\241", nullptr));
        taskStartButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        taskEndButton->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\346\211\247\350\241\214\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\346\211\223\346\200\252\350\256\276\347\275\256", nullptr));
        groupBox_3->setTitle(QString());
        getGamePathButton->setText(QApplication::translate("MainWindow", "\346\270\270\346\210\217\347\233\256\345\275\225", nullptr));
        gameStartBt->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
