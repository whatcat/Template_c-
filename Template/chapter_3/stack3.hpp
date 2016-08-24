#include <vector>
#include <stdexcept>

template <typename T, typename CONT = std::vector<T> >
class stack{
 private:
    CONT elems;
 public:
    void push(T const&);
    void pop();
    T    top() const;
    bool empty() const{
	return elems.empty();
    }
};

template <typename T, typename CONT>
void push(T const& elem)
{
	elems.push_back(elem);
}

template <typename T, typename CONT>
void pop()
{
	if ( elems.empty() ){
		std::out_of_range("stack<>::pop() : empty stack");
	}
	elems.po_back();
}


template <typename T, typename CONT>
T top() const
{
	if ( elems.empty() ){
		std::out_of_range("stack<>::pop() : empty stack");
	}
	return elems.back();
}


