#include "MutantStack.hpp"

// int	main(void)
// {
// 	MutantStack<int> st;

// 	st.push(5);
// 	st.push(42);
// 	st.push(7);
// 	st.push(69);
// 	st.push(91);

// 	MutantStack<int>::iterator it;
// 	MutantStack<int>::iterator itb = st.begin();

// 	it = st.end();

// 	std::cout << "top = " << st.top() << std::endl;
// 	std::cout << "*it = " << *it << std::endl;
// 	std::cout << "begin = " << *itb << std::endl;



// 	st.pop();
// 	std::cout << st.top() << std::endl;
// 	std::cout << "size: " << st.size() << std::endl;


// 	return (0);
// }

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);

std::cout << mstack.top() << std::endl;

mstack.pop();
std::cout << "size = " << mstack.size() << std::endl;

mstack.push(3);
mstack.push(5);
 mstack.push(737);
 //[...] mstack.push(0);

MutantStack<int>::iterator it = mstack.begin();
 MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite) {
    std::cout << *it << std::endl;
++it; }
std::stack<int> s(mstack); return 0;
}
