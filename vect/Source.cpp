#include "vect.h"
#include <iostream>


class Test {
private:
	int x;
public:
	Test() : x(0) {}
	Test(const int x) : x(x) {}
	Test(const Test& other) : x(other.x) {}
	Test(const Test&& other) noexcept : x(other.x)  {}
	void operator=(const Test& other)
	{
		x = other.x;
	}
	void operator=(const Test&& other) noexcept
	{
		x = other.x;
	}
};


int main()
{
	Vect<Test> v;
	Test t1;
	v.push_back(t1);
	v.push_back(Test(2));

	Vect<int> v2;
	v2.push_back(1);
	v2.push_back(5);
	int x = 12;
	v2.push_back(x);

	for (int k = 0; k < v2.count(); k++)
	{
		std::cout << v2[k] << std::endl;
	}

	return 0;
}