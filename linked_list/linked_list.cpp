#include <iostream>
#include "headers/List_t.h"

int main()
{
	List_t list = List_t(5);

	list.push_back(10);
	list.push_back(11);
	list.push_back(12);
	list.push_back(13);

	list.print();

	return 0;
}
