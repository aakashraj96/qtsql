/********************************************************************************
** Form generated from reading UI file 'groupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPDIALOG_H
#define UI_GROUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_groupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *groupDialog)
    {
        if (groupDialog->objectName().isEmpty())
            groupDialog->setObjectName(QStringLiteral("groupDialog"));
        groupDialog->resize(400, 200);
        groupDialog->setMinimumSize(QSize(400, 200));
        groupDialog->setMaximumSize(QSize(400, 200));
        verticalLayout = new QVBoxLayout(groupDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(groupDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(pushButton);


        retranslateUi(groupDialog);

        QMetaObject::connectSlotsByName(groupDialog);
    } // setupUi

    void retranslateUi(QDialog *groupDialog)
    {
        groupDialog->setWindowTitle(QApplication::translate("groupDialog", "Dialog", 0));
        label->setText(QApplication::translate("groupDialog", "Group Name: ", 0));
        pushButton->setText(QApplication::translate("groupDialog", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class groupDialog: public Ui_groupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPDIALOG_H
