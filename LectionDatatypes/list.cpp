#include "list.h"
#include <iostream>


list::list(double listValue, bool root)
{
	this->listValue = listValue;
	this->root = root;
	ptrNextItem = nullptr;
}

list::~list()
{

}

list* list::addItem(double listValue)
{
	list *temp = new list(listValue);
	temp->ptrNextItem = this->ptrNextItem;
	this->ptrNextItem = temp;
	return temp;
}

void list::deleteItem(list* lst)
{
	if (root)
	{
		list* temp = this->ptrNextItem;
		while (temp->ptrNextItem != lst)
		{
			temp = temp->ptrNextItem;
		}
		temp->ptrNextItem = lst->ptrNextItem;
		delete lst;
	}
}

void list::showElements()
{
	list* temp = this;
	int number = 0;
	do
	{
		std::cout << "[" << number++ << "]:" <<  temp->listValue << std::endl;
		temp = temp->ptrNextItem;
	} while (temp->ptrNextItem != nullptr);
}

