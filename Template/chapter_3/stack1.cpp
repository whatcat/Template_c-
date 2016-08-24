#include <iostream>
#include <string>
#include <cstdlib>
#include "stack1.hpp"

int main()
{
 try
 {
	stack<int>       intstack;
	stack<std::string>    stringstack;
	
	intstack.push(7);
	std::cout << instack.top() << std::endl;

	stringstack.push("hello");
	std::cout << stringsatck.top() << std::endl;

	intstack.pop();
	stringstack.pop();
 }
 catch (std::exception const& ex)
 {
	std::cerr << "Exception:" << ex.what() << std::endl;
	return EXIT_FAILURE;
 }

}
