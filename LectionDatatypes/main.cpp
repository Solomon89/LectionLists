#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	list list_of_double = list(5.68,true);
	list* last = list_of_double.addItem(1.6);
	last = last->addItem(2.6);
	last = last->addItem(3.6);
	list* todelete = last->addItem(4.6);
	last = todelete->addItem(5.6);
	last = last->addItem(6.6);

	list_of_double.showElements();

	list_of_double.deleteItem(todelete);
	cout << "New list:" << endl;
	list_of_double.showElements();

	return 0;
}