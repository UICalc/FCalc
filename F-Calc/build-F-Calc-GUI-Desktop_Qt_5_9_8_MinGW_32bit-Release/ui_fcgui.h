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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FCGUI
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
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
    QCheckBox *checkBox;
    QLabel *label_8;
    QProgressBar *progressBar;
    QPushButton *start;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser;
    QPushButton *exit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FCGUI)
    {
        if (FCGUI->objectName().isEmpty())
            FCGUI->setObjectName(QStringLiteral("FCGUI"));
        FCGUI->resize(400, 480);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../MEDIA/\345\210\266\345\233\276/1x/\347\224\273\346\235\277 1-m.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        FCGUI->setWindowIcon(icon);
        FCGUI->setIconSize(QSize(256, 256));
        centralWidget = new QWidget(FCGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        airres = new QLineEdit(tab);
        airres->setObjectName(QStringLiteral("airres"));

        verticalLayout_2->addWidget(airres);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        mass = new QLineEdit(tab);
        mass->setObjectName(QStringLiteral("mass"));

        verticalLayout_2->addWidget(mass);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        startv = new QLineEdit(tab);
        startv->setObjectName(QStringLiteral("startv"));

        verticalLayout_2->addWidget(startv);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        tott = new QLineEdit(tab);
        tott->setObjectName(QStringLiteral("tott"));

        verticalLayout_2->addWidget(tott);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        timejd = new QLineEdit(tab);
        timejd->setObjectName(QStringLiteral("timejd"));

        verticalLayout_2->addWidget(timejd);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        progressBar = new QProgressBar(tab);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        verticalLayout_2->addWidget(progressBar);

        start = new QPushButton(tab);
        start->setObjectName(QStringLiteral("start"));

        verticalLayout_2->addWidget(start);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_3->addWidget(textBrowser);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));

        verticalLayout->addWidget(exit);

        FCGUI->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FCGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FCGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FCGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FCGUI->setStatusBar(statusBar);

        retranslateUi(FCGUI);
        QObject::connect(exit, SIGNAL(clicked()), FCGUI, SLOT(close()));

        tabWidget->setCurrentIndex(0);


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
        checkBox->setText(QApplication::translate("FCGUI", "\350\276\223\345\207\272\346\213\237\345\220\210\346\225\260\346\215\256", Q_NULLPTR));
        label_8->setText(QApplication::translate("FCGUI", "Ready. Powered by:UIC(https://kechuang.org/u/77939)", Q_NULLPTR));
        start->setText(QApplication::translate("FCGUI", "\345\274\200\345\247\213\350\256\241\347\256\227", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FCGUI", "Calculator", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("FCGUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">F-Calc GUI Edition <a href=\"https://www.kechuang.org/t/84497\"><span style=\" text-decoration: underline; color:#0000ff;\">https://www.kechuang.org/t/84497</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\350\256\241\347\256\227\347\273\223\346\236\234\345\217\257\350\203\275\344\274\232\346\234\211\350\257\257\345\267\256\357\274\214\344\270\224\345\222\214\347\262\276\345\272\246\346\234\211\345\205\263\343\200\202</span></p>\n"
"<p style="
                        "\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\347\224\261UIC\347\274\226\345\206\231(</span><a href=\"https://www.kechuang.org/u/77939\"><span style=\" font-size:12pt; text-decoration: underline; color:#0000ff;\">https://kechuang.org/u/77939)</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:10px; margin-bottom:10px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:1.1%; background-color:#ffffff;\"><span style=\" font-family:'Arial,sans-serif'; font-size:22.5pt; font-weight:600; font-style:italic; color:#282c37;\">UIC TECH</span> </p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<hr width=\"100%\"/>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
                        "x; background-color:#ffffff;\"><span style=\" font-family:'Arial,sans-serif'; font-style:italic; color:#282c37;\">Hangzhou High School</span> </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Arial,sans-serif'; font-style:italic; color:#282c37;\">Senior 1 Student</span> </p>\n"
"<hr width=\"100%\"/>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Arial,sans-serif'; font-size:13.5pt; font-style:italic; color:#282c37;\">Physics</span> </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Arial,sans-serif'; font-size:13.5pt; font-style:italic; color:#282c37;\">Infomatics</spa"
                        "n> </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Arial,sans-serif'; font-size:13.5pt; font-style:italic; color:#282c37;\">Aerospace</span> </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Arial,sans-serif'; font-size:13.5pt; font-style:italic; color:#282c37;\">Inertial Navigation</span> </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Arial,sans-serif'; font-size:13.5pt; font-style:italic; color:#282c37;\">Energetic Materials</span> </p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("FCGUI", "About", Q_NULLPTR));
        exit->setText(QApplication::translate("FCGUI", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FCGUI: public Ui_FCGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCGUI_H
