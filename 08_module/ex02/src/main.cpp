#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> st;

	st.push(5);
	st.push(42);
	st.push(7);
	st.push(69);
	st.push(91);

	MutantStack<int>::iterator it;
	MutantStack<int>::iterator itb = st.begin();

	it = st.end();

	std::cout << "top = " << st.top() << std::endl;
	std::cout << "*it = " << *it << std::endl;
	std::cout << "begin = " << *itb << std::endl;



	st.pop();
	std::cout << st.top() << std::endl;
	std::cout << "size: " << st.size() << std::endl;


	return (0);
}
