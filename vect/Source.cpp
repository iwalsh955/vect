#include "vect.h"
#include <iostream>

int main()
{
	Vect<int> v(100);
	v.push_back(1);
	v.push_back(2);
	v.push_back(12);

	for (int k = 0; k < v.count(); k++)
	{
		std::cout << v[k] << std::endl;
	}

	v[0] = 12;

	for (int k = 0; k < v.count(); k++)
	{
		std::cout << v[k] << std::endl;
	}

	return 0;
}