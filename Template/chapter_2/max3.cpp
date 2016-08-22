#include <iostream>
#include <cstring>
#include <string>

// 求2个任意类型值的最大值
template <typename T>
inline T const& max(T const& a, T const& b)
{
	return a < b ? b : a;
}

// 求两个指针指向值的最大值
template <typename T>
inline T* const& max(T* const& a, T* const& b)
{
	return *a < *b ? b : a;
}

// 求2个C字符串的最大值
inline char const* const& max(char const* const& a, char const* const& b)
{
	return std::strcmp(a, b) < 0 ? b : a;
}

int main()
{
	int a = 7;
	int b =42;
	::max(a, b);  //max() 求2个int值的最大值
	std::cout << "max(a,b) "  << ::max(a,b) <<std::endl;
	
	std::string s = "hey";
	std::string t = "you";
	::max(s, t);    // max() 求两个string类型的最大值
	std::cout << "max(s, t) " << ::max(s, t)<<std::endl;

	int* p1 = &b;
	int* p2 = &a;
	::max(p1, p2); // max() 求两个指针锁指向值的最大者
	std::cout<< "max(p1, p2) " << ::max(p1, p2) <<std::endl;	

	char const* s1 = "David";
	char const* s2 = "Nico";
	::max(s1, s2);
	std::cout << "max(s1, s2)" << ::max(s1, s2) <<std::endl;

	std::cout<< " ok" << std::endl;
}
