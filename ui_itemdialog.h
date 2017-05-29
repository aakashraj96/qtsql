/********************************************************************************
** Form generated from reading UI file 'itemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMDIALOG_H
#define UI_ITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_itemDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *itemDialog)
    {
        if (itemDialog->objectName().isEmpty())
            itemDialog->setObjectName(QStringLiteral("itemDialog"));
        itemDialog->resize(300, 590);
        itemDialog->setMinimumSize(QSize(300, 590));
        itemDialog->setMaximumSize(QSize(300, 590));
        verticalLayout_3 = new QVBoxLayout(itemDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(itemDialog);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(9);
        radioButton->setFont(font);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(itemDialog);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setMinimumSize(QSize(0, 30));
        radioButton_2->setFont(font);

        horizontalLayout->addWidget(radioButton_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(itemDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 30));
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(itemDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(itemDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(itemDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 30));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(itemDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 30));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(itemDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 30));
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(itemDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 30));
        label_7->setFont(font);

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(itemDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 30));
        label_8->setFont(font);

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(itemDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 30));
        label_9->setFont(font);

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(itemDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 30));
        label_10->setFont(font);

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(itemDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(0, 30));
        label_11->setFont(font);

        verticalLayout_2->addWidget(label_11);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox_2 = new QComboBox(itemDialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(comboBox_2);

        pushButton_2 = new QPushButton(itemDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 30));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);

        lineEdit_2 = new QLineEdit(itemDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(itemDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(itemDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(itemDialog);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(itemDialog);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(itemDialog);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(itemDialog);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEdit_8);

        lineEdit_9 = new QLineEdit(itemDialog);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEdit_9);

        comboBox = new QComboBox(itemDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(comboBox);

        lineEdit = new QLineEdit(itemDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(itemDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        verticalLayout_3->addWidget(pushButton);


        retranslateUi(itemDialog);

        QMetaObject::connectSlotsByName(itemDialog);
    } // setupUi

    void retranslateUi(QDialog *itemDialog)
    {
        itemDialog->setWindowTitle(QApplication::translate("itemDialog", "Dialog", 0));
        radioButton->setText(QApplication::translate("itemDialog", "MAIN", 0));
        radioButton_2->setText(QApplication::translate("itemDialog", "ACCESSORY", 0));
        label->setText(QApplication::translate("itemDialog", "Group Name: ", 0));
        label_2->setText(QApplication::translate("itemDialog", "Item Name:", 0));
        label_3->setText(QApplication::translate("itemDialog", "Purchase Rate:", 0));
        label_4->setText(QApplication::translate("itemDialog", "Sales Rate:", 0));
        label_5->setText(QApplication::translate("itemDialog", "Tax %:", 0));
        label_6->setText(QApplication::translate("itemDialog", "Opening Stock: ", 0));
        label_7->setText(QApplication::translate("itemDialog", "Service Add1:", 0));
        label_8->setText(QApplication::translate("itemDialog", "Service Add2:", 0));
        label_9->setText(QApplication::translate("itemDialog", "Service Add3:", 0));
        label_10->setText(QApplication::translate("itemDialog", "Serial Numbers:", 0));
        label_11->setText(QApplication::translate("itemDialog", "Parent Item: ", 0));
        pushButton_2->setText(QApplication::translate("itemDialog", "Add Group", 0));
        pushButton->setText(QApplication::translate("itemDialog", "CREATE", 0));
    } // retranslateUi

};

namespace Ui {
    class itemDialog: public Ui_itemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMDIALOG_H
