#include <iostream>
#include "CRTP/crtp.hpp"

void crtp_test()
{
	crtp::Derived d;
	d.interface();

	crtp::ToClone obj;
	obj.x = 'a';
	auto *cl = obj.clone();
	delete cl;
}

int main()
{
	std::cout << "Hello from playground" << std::endl;
	return 0;
}
