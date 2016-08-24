#include <vector>
#include <stdexcept>

template <typename T>
class stack{
 private:
    int a;
    std::vector<T> elems;
 public:
    void push(T const& );
    void pop();
    T    top() const;
    bool empty() const{
      return elems.empty();
    }

};

template <typename T>
void push(T const& elem)
{
   std :: cout << a;
   elems.push_back(elem);
} 

template <typename T>
void pop()
{
   if (elems.empty())
   {
	throw std::out_of_range("stack<>::pop(): empty stack");
   }
   elems.pop_back();
}

template <typename T>
T top() const
{
    if(elems.empty())
    {
	throw std::out_of_range("stack<>::top() : stack empty");
    }
    return elems.back();
}

