/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *clear;
    QPushButton *sign;
    QPushButton *darsad;
    QPushButton *taghsim;
    QPushButton *zarb;
    QPushButton *number7;
    QPushButton *number8;
    QPushButton *number9;
    QPushButton *minus;
    QPushButton *number6;
    QPushButton *number5;
    QPushButton *number4;
    QPushButton *plus;
    QPushButton *number3;
    QPushButton *number1;
    QPushButton *number2;
    QPushButton *equal;
    QPushButton *number0;
    QPushButton *dot;
    QLabel *label;
    QPushButton *radikal;
    QPushButton *ce;
    QPushButton *pow;
    QPushButton *inverse;
    QPushButton *backspace;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(733, 624);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(10, 200, 70, 70));
        clear->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 204, 0);\n"
"color:black;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:qlineagradient(x1:0,y1:0,x2:0,y2:1, stop: 0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        sign = new QPushButton(centralWidget);
        sign->setObjectName(QStringLiteral("sign"));
        sign->setGeometry(QRect(10, 480, 70, 71));
        sign->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        darsad = new QPushButton(centralWidget);
        darsad->setObjectName(QStringLiteral("darsad"));
        darsad->setGeometry(QRect(10, 130, 70, 70));
        darsad->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"border:1px solid gray;\n"
"color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1: 0, y1: 0 , x2: 0 , y2: 1, stop : 0 #BEBEBE , stop : 1 #D7D7D7);\n"
"}"));
        taghsim = new QPushButton(centralWidget);
        taghsim->setObjectName(QStringLiteral("taghsim"));
        taghsim->setGeometry(QRect(220, 200, 70, 70));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        taghsim->setFont(font);
        taghsim->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 204, 0);\n"
"color:black;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:qlineagradient(x1:0,y1:0,x2:0,y2:1, stop: 0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        zarb = new QPushButton(centralWidget);
        zarb->setObjectName(QStringLiteral("zarb"));
        zarb->setGeometry(QRect(220, 270, 70, 70));
        zarb->setFont(font);
        zarb->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 204, 0);\n"
"color:black;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:qlineagradient(x1:0,y1:0,x2:0,y2:1, stop: 0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        number7 = new QPushButton(centralWidget);
        number7->setObjectName(QStringLiteral("number7"));
        number7->setGeometry(QRect(10, 270, 70, 70));
        number7->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        number8 = new QPushButton(centralWidget);
        number8->setObjectName(QStringLiteral("number8"));
        number8->setGeometry(QRect(80, 270, 70, 70));
        number8->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        number9 = new QPushButton(centralWidget);
        number9->setObjectName(QStringLiteral("number9"));
        number9->setGeometry(QRect(150, 270, 70, 70));
        number9->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setGeometry(QRect(220, 340, 70, 70));
        minus->setFont(font);
        minus->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 204, 0);\n"
"color:black;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:qlineagradient(x1:0,y1:0,x2:0,y2:1, stop: 0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        number6 = new QPushButton(centralWidget);
        number6->setObjectName(QStringLiteral("number6"));
        number6->setGeometry(QRect(150, 340, 70, 70));
        number6->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        number5 = new QPushButton(centralWidget);
        number5->setObjectName(QStringLiteral("number5"));
        number5->setGeometry(QRect(80, 340, 70, 70));
        number5->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        number4 = new QPushButton(centralWidget);
        number4->setObjectName(QStringLiteral("number4"));
        number4->setGeometry(QRect(10, 340, 70, 70));
        number4->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QStringLiteral("plus"));
        plus->setGeometry(QRect(220, 410, 70, 70));
        plus->setFont(font);
        plus->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 204, 0);\n"
"color:black;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:qlineagradient(x1:0,y1:0,x2:0,y2:1, stop: 0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        number3 = new QPushButton(centralWidget);
        number3->setObjectName(QStringLiteral("number3"));
        number3->setGeometry(QRect(150, 410, 70, 70));
        number3->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        number1 = new QPushButton(centralWidget);
        number1->setObjectName(QStringLiteral("number1"));
        number1->setGeometry(QRect(10, 410, 70, 70));
        number1->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        number2 = new QPushButton(centralWidget);
        number2->setObjectName(QStringLiteral("number2"));
        number2->setGeometry(QRect(80, 410, 70, 70));
        number2->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        equal = new QPushButton(centralWidget);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setGeometry(QRect(220, 480, 70, 71));
        equal->setFont(font);
        equal->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 204, 0);\n"
"color:black;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:qlineagradient(x1:0,y1:0,x2:0,y2:1, stop: 0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        number0 = new QPushButton(centralWidget);
        number0->setObjectName(QStringLiteral("number0"));
        number0->setGeometry(QRect(79, 480, 71, 71));
        number0->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        dot = new QPushButton(centralWidget);
        dot->setObjectName(QStringLiteral("dot"));
        dot->setGeometry(QRect(150, 480, 70, 71));
        dot->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"color:white;\n"
"border:1px solid gray;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1:0,y1:0;x2:0,y2:1,stop: 0 #dadbde , stop 1 #f6f7fa);\n"
"}"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 281, 70));
        QFont font1;
        font1.setFamily(QStringLiteral("Mj_TV Bold"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setFocusPolicy(Qt::StrongFocus);
        label->setContextMenuPolicy(Qt::ActionsContextMenu);
        label->setStyleSheet(QLatin1String("QLable{\n"
"qproperty-alignment:'AlignVCenter | AlignRight';\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"background-color:white;"));
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);
        radikal = new QPushButton(centralWidget);
        radikal->setObjectName(QStringLiteral("radikal"));
        radikal->setGeometry(QRect(80, 130, 70, 70));
        radikal->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"border:1px solid gray;\n"
"color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1: 0, y1: 0 , x2: 0 , y2: 1, stop : 0 #BEBEBE , stop : 1 #D7D7D7);\n"
"}"));
        ce = new QPushButton(centralWidget);
        ce->setObjectName(QStringLiteral("ce"));
        ce->setGeometry(QRect(80, 200, 70, 70));
        ce->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 204, 0);\n"
"color:black;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:qlineagradient(x1:0,y1:0,x2:0,y2:1, stop: 0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        pow = new QPushButton(centralWidget);
        pow->setObjectName(QStringLiteral("pow"));
        pow->setGeometry(QRect(150, 130, 70, 70));
        pow->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"border:1px solid gray;\n"
"color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1: 0, y1: 0 , x2: 0 , y2: 1, stop : 0 #BEBEBE , stop : 1 #D7D7D7);\n"
"}"));
        inverse = new QPushButton(centralWidget);
        inverse->setObjectName(QStringLiteral("inverse"));
        inverse->setGeometry(QRect(220, 130, 70, 70));
        inverse->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(89,89,89);\n"
"border:1px solid gray;\n"
"color:white;\n"
"}\n"
"QPushButton::pressed{\n"
"background-color:qlineargadient(x1: 0, y1: 0 , x2: 0 , y2: 1, stop : 0 #BEBEBE , stop : 1 #D7D7D7);\n"
"}"));
        backspace = new QPushButton(centralWidget);
        backspace->setObjectName(QStringLiteral("backspace"));
        backspace->setGeometry(QRect(150, 200, 70, 70));
        backspace->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 204, 0);\n"
"color:black;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:qlineagradient(x1:0,y1:0,x2:0,y2:1, stop: 0 #FF7832 , stop: 1 #FF9739);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 733, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        clear->setText(QApplication::translate("MainWindow", "C", nullptr));
        sign->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        darsad->setText(QApplication::translate("MainWindow", "%", nullptr));
        taghsim->setText(QApplication::translate("MainWindow", "/", nullptr));
        zarb->setText(QApplication::translate("MainWindow", "X", nullptr));
        number7->setText(QApplication::translate("MainWindow", "7", nullptr));
        number8->setText(QApplication::translate("MainWindow", "8", nullptr));
        number9->setText(QApplication::translate("MainWindow", "9", nullptr));
        minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        number6->setText(QApplication::translate("MainWindow", "6", nullptr));
        number5->setText(QApplication::translate("MainWindow", "5", nullptr));
        number4->setText(QApplication::translate("MainWindow", "4", nullptr));
        plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        number3->setText(QApplication::translate("MainWindow", "3", nullptr));
        number1->setText(QApplication::translate("MainWindow", "1", nullptr));
        number2->setText(QApplication::translate("MainWindow", "2", nullptr));
        equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        number0->setText(QApplication::translate("MainWindow", "0", nullptr));
        dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        label->setText(QString());
        radikal->setText(QApplication::translate("MainWindow", "sqrt", nullptr));
        ce->setText(QApplication::translate("MainWindow", "CE", nullptr));
        pow->setText(QApplication::translate("MainWindow", "2th power", nullptr));
        inverse->setText(QApplication::translate("MainWindow", "1/x", nullptr));
        backspace->setText(QApplication::translate("MainWindow", "backspace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
