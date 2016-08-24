#include <iostream>
#include <deque>
#include <cstdlib>
#include "stack3.hpp"

int main()
{
 try{
	stack<int> intstack;

	stack<double, std::deque<double> > dblstack;

	intstack.push(7);
	std::cout << intstack.top() << std::endl;
	intstack.pop();

	dblstack.push(42.42);
	std::cout << dblstack.top() << std::endl;
	dblstack.pop();
	dblstack.pop();

     }
 catch (std::exception const& ex){
	std::cerr << "Exception:" << std::endl;
	retrun EXIT_FAILURE;
 }
}
