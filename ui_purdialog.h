/********************************************************************************
** Form generated from reading UI file 'purdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURDIALOG_H
#define UI_PURDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_purDialog
{
public:
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_17;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_8;
    QTableView *tableView;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *pushButton_4;

    void setupUi(QDialog *purDialog)
    {
        if (purDialog->objectName().isEmpty())
            purDialog->setObjectName(QStringLiteral("purDialog"));
        purDialog->resize(1438, 690);
        purDialog->setMinimumSize(QSize(600, 100));
        verticalLayout_9 = new QVBoxLayout(purDialog);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(purDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(250, 30));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(purDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 30));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(purDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        dateEdit = new QDateEdit(purDialog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMinimumSize(QSize(0, 30));
        dateEdit->setFont(font);

        verticalLayout_2->addWidget(dateEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(purDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 30));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_10 = new QLineEdit(purDialog);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(lineEdit_10);

        pushButton = new QPushButton(purDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton->setFont(font1);

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_17 = new QSpacerItem(438, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_17);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_18);


        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox = new QGroupBox(purDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(600, 120));
        groupBox->setFont(font1);
        verticalLayout_11 = new QVBoxLayout(groupBox);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        label_4->setFont(font2);

        horizontalLayout_4->addWidget(label_4);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(200, 0));

        verticalLayout_3->addWidget(lineEdit_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_12);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_7 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_4->addWidget(lineEdit_3);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_13);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalSpacer_8 = new QSpacerItem(26, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_5->addWidget(lineEdit_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer_6);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalSpacer_9 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_7->addWidget(label_8);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 0));

        verticalLayout_7->addWidget(label_7);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_7->addItem(horizontalSpacer_10);


        horizontalLayout_2->addLayout(verticalLayout_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 30));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_3->setFont(font3);

        verticalLayout_6->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_6->setFont(font4);

        verticalLayout_6->addWidget(pushButton_6);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_11->addLayout(horizontalLayout_2);


        horizontalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(purDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(200, 120));
        verticalLayout_10 = new QVBoxLayout(groupBox_2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_10->addWidget(label_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        verticalLayout_8->addWidget(lineEdit_8);

        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(300, 0));

        verticalLayout_8->addWidget(lineEdit_7);

        lineEdit_9 = new QLineEdit(groupBox_2);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        verticalLayout_8->addWidget(lineEdit_9);


        verticalLayout_10->addLayout(verticalLayout_8);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font);

        verticalLayout_10->addWidget(pushButton_5);


        horizontalLayout_5->addWidget(groupBox_2);


        verticalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        tableView = new QTableView(purDialog);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy2);

        horizontalLayout_8->addWidget(tableView);

        tableView_2 = new QTableView(purDialog);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableView_2->sizePolicy().hasHeightForWidth());
        tableView_2->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(tableView_2);


        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_20);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_21);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_22);

        pushButton_4 = new QPushButton(purDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 30));
        pushButton_4->setFont(font);

        horizontalLayout_7->addWidget(pushButton_4);


        verticalLayout_9->addLayout(horizontalLayout_7);


        retranslateUi(purDialog);

        QMetaObject::connectSlotsByName(purDialog);
    } // setupUi

    void retranslateUi(QDialog *purDialog)
    {
        purDialog->setWindowTitle(QApplication::translate("purDialog", "Dialog", 0));
        label->setText(QApplication::translate("purDialog", "Purchase Invoice Date:", 0));
        label_2->setText(QApplication::translate("purDialog", "Purchase Invoice Number:", 0));
        label_3->setText(QApplication::translate("purDialog", "Vendor Name:", 0));
        pushButton->setText(QApplication::translate("purDialog", "Add Vendor", 0));
        groupBox->setTitle(QApplication::translate("purDialog", "Input", 0));
        label_4->setText(QApplication::translate("purDialog", "Item name:", 0));
        pushButton_2->setText(QApplication::translate("purDialog", "Add Item", 0));
        label_5->setText(QApplication::translate("purDialog", "Quantity:", 0));
        label_6->setText(QApplication::translate("purDialog", "Amount:", 0));
        label_8->setText(QApplication::translate("purDialog", "Net:", 0));
        label_7->setText(QApplication::translate("purDialog", "TextLabel", 0));
        pushButton_3->setText(QApplication::translate("purDialog", "Done", 0));
        pushButton_6->setText(QApplication::translate("purDialog", "Delete", 0));
        groupBox_2->setTitle(QApplication::translate("purDialog", "GroupBox", 0));
        label_9->setText(QApplication::translate("purDialog", "Serial No:", 0));
        pushButton_5->setText(QApplication::translate("purDialog", "Next", 0));
        pushButton_4->setText(QApplication::translate("purDialog", "Submit", 0));
    } // retranslateUi

};

namespace Ui {
    class purDialog: public Ui_purDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURDIALOG_H
