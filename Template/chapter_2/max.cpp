#include <iostream>
#include <string>
#include "max.hpp"

int main()
{
	int i = 42;
	std::cout << "max(i, 7) "<< ::max(i, 7) << std::endl;

	double f1 = 3.4;
	double f2 = 4.5;
	std::cout << "max(f1, f2) " << ::max(f1, f2) << std::endl;

	std::string s1 = "mathematics";
	std::string s2 = "math";
	std::cout << "max(s1, s2) " << ::max(s1, s2) << std::endl;

}
