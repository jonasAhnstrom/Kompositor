/********************************************************************************
** Form generated from reading UI file 'kompositor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOMPOSITOR_H
#define UI_KOMPOSITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KompositorClass
{
public:
    QWidget *centralWidget;
    QLabel *label_half;
    QRadioButton *radioButton_half;
    QLabel *label_quarter;
    QRadioButton *radioButton_quarter;
    QRadioButton *radioButton_eight;
    QLabel *label_eight;
    QRadioButton *radioButton_quarterrest;
    QLabel *label_quarterrest;
    QRadioButton *radioButton_eightrest;
    QLabel *label_eightrest;
    QPushButton *pushButton_spela;
    QLabel *label_notblad;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KompositorClass)
    {
        if (KompositorClass->objectName().isEmpty())
            KompositorClass->setObjectName(QStringLiteral("KompositorClass"));
        KompositorClass->resize(1028, 662);
        centralWidget = new QWidget(KompositorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_half = new QLabel(centralWidget);
        label_half->setObjectName(QStringLiteral("label_half"));
        label_half->setGeometry(QRect(60, 120, 51, 71));
        label_half->setPixmap(QPixmap(QString::fromUtf8(":/Kompositor/Resources/half.png")));
        radioButton_half = new QRadioButton(centralWidget);
        radioButton_half->setObjectName(QStringLiteral("radioButton_half"));
        radioButton_half->setGeometry(QRect(50, 200, 82, 17));
        label_quarter = new QLabel(centralWidget);
        label_quarter->setObjectName(QStringLiteral("label_quarter"));
        label_quarter->setGeometry(QRect(140, 120, 61, 71));
        label_quarter->setPixmap(QPixmap(QString::fromUtf8(":/Kompositor/Resources/quarter.png")));
        radioButton_quarter = new QRadioButton(centralWidget);
        radioButton_quarter->setObjectName(QStringLiteral("radioButton_quarter"));
        radioButton_quarter->setGeometry(QRect(140, 200, 82, 17));
        radioButton_eight = new QRadioButton(centralWidget);
        radioButton_eight->setObjectName(QStringLiteral("radioButton_eight"));
        radioButton_eight->setGeometry(QRect(230, 200, 82, 17));
        label_eight = new QLabel(centralWidget);
        label_eight->setObjectName(QStringLiteral("label_eight"));
        label_eight->setGeometry(QRect(230, 120, 61, 71));
        label_eight->setPixmap(QPixmap(QString::fromUtf8(":/Kompositor/Resources/eight.png")));
        radioButton_quarterrest = new QRadioButton(centralWidget);
        radioButton_quarterrest->setObjectName(QStringLiteral("radioButton_quarterrest"));
        radioButton_quarterrest->setGeometry(QRect(320, 200, 82, 17));
        label_quarterrest = new QLabel(centralWidget);
        label_quarterrest->setObjectName(QStringLiteral("label_quarterrest"));
        label_quarterrest->setGeometry(QRect(330, 120, 61, 71));
        label_quarterrest->setPixmap(QPixmap(QString::fromUtf8(":/Kompositor/Resources/quarterrest.png")));
        radioButton_eightrest = new QRadioButton(centralWidget);
        radioButton_eightrest->setObjectName(QStringLiteral("radioButton_eightrest"));
        radioButton_eightrest->setGeometry(QRect(430, 200, 82, 17));
        label_eightrest = new QLabel(centralWidget);
        label_eightrest->setObjectName(QStringLiteral("label_eightrest"));
        label_eightrest->setGeometry(QRect(440, 100, 61, 81));
        label_eightrest->setPixmap(QPixmap(QString::fromUtf8(":/Kompositor/Resources/eightrest.png")));
        pushButton_spela = new QPushButton(centralWidget);
        pushButton_spela->setObjectName(QStringLiteral("pushButton_spela"));
        pushButton_spela->setGeometry(QRect(50, 420, 75, 23));
        label_notblad = new QLabel(centralWidget);
        label_notblad->setObjectName(QStringLiteral("label_notblad"));
        label_notblad->setGeometry(QRect(50, 250, 900, 120));
        label_notblad->setPixmap(QPixmap(QString::fromUtf8(":/Kompositor/Resources/notblad.png")));
        KompositorClass->setCentralWidget(centralWidget);
        label_notblad->raise();
        pushButton_spela->raise();
        radioButton_eightrest->raise();
        radioButton_quarterrest->raise();
        label_eightrest->raise();
        label_quarterrest->raise();
        radioButton_eight->raise();
        label_eight->raise();
        label_half->raise();
        label_quarter->raise();
        radioButton_quarter->raise();
        radioButton_half->raise();
        menuBar = new QMenuBar(KompositorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1028, 21));
        KompositorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KompositorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        KompositorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KompositorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KompositorClass->setStatusBar(statusBar);

        retranslateUi(KompositorClass);

        QMetaObject::connectSlotsByName(KompositorClass);
    } // setupUi

    void retranslateUi(QMainWindow *KompositorClass)
    {
        KompositorClass->setWindowTitle(QApplication::translate("KompositorClass", "Kompositor", 0));
        label_half->setText(QString());
        radioButton_half->setText(QApplication::translate("KompositorClass", "half", 0));
        label_quarter->setText(QString());
        radioButton_quarter->setText(QApplication::translate("KompositorClass", "quarter", 0));
        radioButton_eight->setText(QApplication::translate("KompositorClass", "eight", 0));
        label_eight->setText(QString());
        radioButton_quarterrest->setText(QApplication::translate("KompositorClass", "quarterrest", 0));
        label_quarterrest->setText(QString());
        radioButton_eightrest->setText(QApplication::translate("KompositorClass", "eightrest", 0));
        label_eightrest->setText(QString());
        pushButton_spela->setText(QApplication::translate("KompositorClass", "Spela", 0));
        label_notblad->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KompositorClass: public Ui_KompositorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOMPOSITOR_H
