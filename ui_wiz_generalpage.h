/********************************************************************************
** Form generated from reading UI file 'wiz_generalpage.ui'
**
** Created: Mon Dec 31 01:20:02 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZ_GENERALPAGE_H
#define UI_WIZ_GENERALPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_GeneralPage
{
public:
    QLabel *lblConfigName;
    QLabel *label;
    QLineEdit *txtConfigName;

    void setupUi(QWizardPage *GeneralPage)
    {
        if (GeneralPage->objectName().isEmpty())
            GeneralPage->setObjectName(QString::fromUtf8("GeneralPage"));
        GeneralPage->resize(400, 300);
        lblConfigName = new QLabel(GeneralPage);
        lblConfigName->setObjectName(QString::fromUtf8("lblConfigName"));
        lblConfigName->setGeometry(QRect(20, 20, 361, 20));
        label = new QLabel(GeneralPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 46, 14));
        txtConfigName = new QLineEdit(GeneralPage);
        txtConfigName->setObjectName(QString::fromUtf8("txtConfigName"));
        txtConfigName->setGeometry(QRect(70, 48, 291, 20));
        txtConfigName->setStyleSheet(QString::fromUtf8(":enabled {border: 1px solid black; background-color: rgb(255, 255, 255);}\n"
":disabled {border: 1px solid black; background-color: rgb(195, 195, 195);}\n"
":hover {border: 1px solid red; }"));

        retranslateUi(GeneralPage);

        QMetaObject::connectSlotsByName(GeneralPage);
    } // setupUi

    void retranslateUi(QWizardPage *GeneralPage)
    {
        GeneralPage->setWindowTitle(QApplication::translate("GeneralPage", "WizardPage", 0, QApplication::UnicodeUTF8));
        GeneralPage->setTitle(QApplication::translate("GeneralPage", "General Settings", 0, QApplication::UnicodeUTF8));
        GeneralPage->setSubTitle(QApplication::translate("GeneralPage", "Specify the name of the config file which should create.", 0, QApplication::UnicodeUTF8));
        lblConfigName->setText(QApplication::translate("GeneralPage", "Please enter the name of the config.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GeneralPage", "Name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GeneralPage: public Ui_GeneralPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZ_GENERALPAGE_H
