#include <deque>
#include <string>
#include <stdexcept>

template<typename T>
class stack {
 private:
    std::deque<std::string> elems;
 public:
    void push(std::string const& elem)
    {
	elems.push_back(elem);
    }
    void pop();
    std::string top() const;
    bool empty() const{
        return elems.empty();
    }
};

/*
template <typename T>
void push (std:: string const& elem)
{
    ::elems.push_back(elem);
}
*/
