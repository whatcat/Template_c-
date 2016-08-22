#include <iostream>

/// 求两个int类型的最大值 
inline int const& max (int const& a, int const& b)
{
	std :: cout << " 1 " << std::endl; 
	return a < b ? b : a;

}

/// 求两个任意类型中的最大值
template <typename T>
inline T const& max (T const& a, T const& b)
{
	std :: cout << " 2 " << std::endl; 
	return a < b ? b : a;
}

/// 求3个任意类型的最大值
template <typename T>
inline T const& max(T const& a, T const& b, T const& c)
{
	std :: cout << " 3 " << std::endl; 
	return ::max(::max(a, b), c);
}

int main()
{
	::max(7, 42, 60);                      // 调用3
	std::cout << ::max(7, 42, 60) << std::endl;
	::max(7.0, 42.0);                      // 调用2     
	std::cout << ::max(7.0, 42.0) << std::endl;
	::max('a', 'b');                       // 调用2
	std::cout << ::max('a', 'b') << std::endl;
	::max<>(7, 42);                        // 调用2
	std::cout << ::max<>(7, 42) << std::endl;
	::max<double>(7, 42);                  // 调用2
	std::cout << ::max<double>(7, 42) << std::endl;
	::max('a', 42.7);                      // 调用1
	std::cout << ::max('a', 42.7) << std::endl;


}
