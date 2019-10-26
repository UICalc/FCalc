/********************************************************************************
** Form generated from reading UI file 'fcgui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FCGUI_H
#define UI_FCGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FCGUI
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *airres;
    QLabel *label_2;
    QLineEdit *mass;
    QLabel *label_3;
    QLineEdit *startv;
    QLabel *label_4;
    QLineEdit *tott;
    QLabel *label_5;
    QLineEdit *timejd;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QPushButton *start;
    QPushButton *exit;
    QProgressBar *progressBar;
    QLabel *label_8;
    QMenuBar *menuBar;
    QMenu *menuF_Calc_0_00;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FCGUI)
    {
        if (FCGUI->objectName().isEmpty())
            FCGUI->setObjectName(QStringLiteral("FCGUI"));
        FCGUI->resize(400, 436);
        QIcon icon;
        icon.addFile(QString::fromUtf8("\347\224\273\346\235\277 1-m.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        FCGUI->setWindowIcon(icon);
        FCGUI->setIconSize(QSize(256, 256));
        centralWidget = new QWidget(FCGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        airres = new QLineEdit(centralWidget);
        airres->setObjectName(QStringLiteral("airres"));

        verticalLayout->addWidget(airres);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        mass = new QLineEdit(centralWidget);
        mass->setObjectName(QStringLiteral("mass"));

        verticalLayout->addWidget(mass);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        startv = new QLineEdit(centralWidget);
        startv->setObjectName(QStringLiteral("startv"));

        verticalLayout->addWidget(startv);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        tott = new QLineEdit(centralWidget);
        tott->setObjectName(QStringLiteral("tott"));

        verticalLayout->addWidget(tott);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        timejd = new QLineEdit(centralWidget);
        timejd->setObjectName(QStringLiteral("timejd"));

        verticalLayout->addWidget(timejd);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));

        verticalLayout->addWidget(start);

        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));

        verticalLayout->addWidget(exit);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        FCGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FCGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menuF_Calc_0_00 = new QMenu(menuBar);
        menuF_Calc_0_00->setObjectName(QStringLiteral("menuF_Calc_0_00"));
        FCGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FCGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FCGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FCGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FCGUI->setStatusBar(statusBar);

        menuBar->addAction(menuF_Calc_0_00->menuAction());

        retranslateUi(FCGUI);
        QObject::connect(exit, SIGNAL(clicked()), FCGUI, SLOT(close()));

        QMetaObject::connectSlotsByName(FCGUI);
    } // setupUi

    void retranslateUi(QMainWindow *FCGUI)
    {
        FCGUI->setWindowTitle(QApplication::translate("FCGUI", "FCGUI", Q_NULLPTR));
        label->setText(QApplication::translate("FCGUI", "\347\251\272\346\260\224\351\230\273\345\212\233\347\263\273\346\225\260 \345\215\225\344\275\215N*s^2/m^2 ", Q_NULLPTR));
        label_2->setText(QApplication::translate("FCGUI", "\347\211\251\344\275\223\350\264\250\351\207\217 \345\215\225\344\275\215kg ", Q_NULLPTR));
        label_3->setText(QApplication::translate("FCGUI", "\345\210\235\351\200\237(m/s)", Q_NULLPTR));
        label_4->setText(QApplication::translate("FCGUI", "\346\200\273\350\256\241\347\256\227\346\227\266\351\227\264(ms)", Q_NULLPTR));
        label_5->setText(QApplication::translate("FCGUI", "\350\256\241\347\256\227\346\227\266\351\227\264\347\262\276\345\272\246(ms)", Q_NULLPTR));
        label_7->setText(QApplication::translate("FCGUI", "\350\276\223\345\207\272\346\227\266\351\227\264\347\262\276\345\272\246(ms)", Q_NULLPTR));
        label_6->setText(QApplication::translate("FCGUI", "\350\256\241\347\256\227\347\273\223\346\236\234\345\217\257\350\203\275\344\274\232\346\234\211\350\257\257\345\267\256\357\274\214\344\270\224\345\222\214\347\262\276\345\272\246\346\234\211\345\205\263\343\200\202", Q_NULLPTR));
        start->setText(QApplication::translate("FCGUI", "\345\274\200\345\247\213\350\256\241\347\256\227", Q_NULLPTR));
        exit->setText(QApplication::translate("FCGUI", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
        label_8->setText(QApplication::translate("FCGUI", "Ready", Q_NULLPTR));
        menuF_Calc_0_00->setTitle(QApplication::translate("FCGUI", "F-Calc 0.00", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FCGUI: public Ui_FCGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCGUI_H
