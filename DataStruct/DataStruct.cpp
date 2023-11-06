#include <iostream>


int main()
{
	std::cout << typeid(const char *).name() << std::endl;

	return 0;
}