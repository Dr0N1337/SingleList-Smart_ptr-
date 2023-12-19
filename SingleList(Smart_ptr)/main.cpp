#include <iostream>
#include "../SingleList/SingleList.h"

int main()
{
	List list1;
    list1.push_back(4);
	list1.push_back(2);
	std::cout << list1.toString() << "\n" << std::endl;
	return 0;
}