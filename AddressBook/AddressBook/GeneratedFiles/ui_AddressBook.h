/********************************************************************************
** Form generated from reading UI file 'AddressBook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOK_H
#define UI_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookClass
{
public:
    QWidget *centralWidget;
    QLabel *emailLabel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer;
    QLabel *nameLabel;
    QListWidget *addressList;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AddressBookClass)
    {
        if (AddressBookClass->objectName().isEmpty())
            AddressBookClass->setObjectName(QString::fromUtf8("AddressBookClass"));
        AddressBookClass->resize(600, 400);
        centralWidget = new QWidget(AddressBookClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        emailLabel = new QLabel(centralWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setGeometry(QRect(60, 30, 351, 241));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 20, 491, 291));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(addButton);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(deleteButton);

        verticalSpacer = new QSpacerItem(20, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 1);

        addressList = new QListWidget(layoutWidget);
        addressList->setObjectName(QString::fromUtf8("addressList"));

        gridLayout->addWidget(addressList, 0, 0, 1, 1);

        AddressBookClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AddressBookClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        AddressBookClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AddressBookClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AddressBookClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AddressBookClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AddressBookClass->setStatusBar(statusBar);

        retranslateUi(AddressBookClass);

        QMetaObject::connectSlotsByName(AddressBookClass);
    } // setupUi

    void retranslateUi(QMainWindow *AddressBookClass)
    {
        AddressBookClass->setWindowTitle(QApplication::translate("AddressBookClass", "AddressBook", nullptr));
        emailLabel->setText(QString());
        addButton->setText(QApplication::translate("AddressBookClass", "Add", nullptr));
        deleteButton->setText(QApplication::translate("AddressBookClass", "Delete", nullptr));
        nameLabel->setText(QApplication::translate("AddressBookClass", "<No item selected>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressBookClass: public Ui_AddressBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOK_H
