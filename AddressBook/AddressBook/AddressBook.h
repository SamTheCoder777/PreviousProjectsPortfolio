#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AddressBook.h"

class AddressBook : public QMainWindow
{
	Q_OBJECT

public:
	AddressBook(QWidget *parent = Q_NULLPTR);

private:
	Ui::AddressBookClass ui;

private slots:
	void on_addButton_clicked();
	void on_addressList_currentItemChanged();
	void on_deleteButton_clicked();
};
