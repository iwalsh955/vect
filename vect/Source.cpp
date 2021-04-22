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
	Vect<int> v(10000000);

	for (int k = 0; k < 10000000; k++)
	{
		v.push_back(k);
		
	}
	std::cout << "Done" << std::endl;
	for (int k = 0; k < 10000000; k++)
	{
		std::cout << v[k] << std::endl;
	}

	return 0;
}