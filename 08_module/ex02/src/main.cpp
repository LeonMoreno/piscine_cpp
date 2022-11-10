#include "MutantStack.hpp"
#include <list>

void    printMsg(std::string s)
{
    std::cout << s << std::endl;
    std::cout << "-----------------" << std::endl;
}

void    test_subject()
{
    printMsg("\tTest Subject");
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
    printMsg("\tstack");
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // std::stack<int> s(mstack);
}

void    test_stdList()
{
    printMsg("\tTest std::list");
    std::list<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);

    std::cout << *mstack.rbegin() << std::endl;

    mstack.pop_back();

    std::cout << "size = " << mstack.size() << std::endl;

    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...] mstack.push(0);

    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    printMsg("\tstack");
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // std::stack<int> s(mstack);
}


void    test_02(void)
{
    printMsg("\n\tTest 02");

	MutantStack<int> st;

	st.push(5);
	st.push(42);
	st.push(7);
	st.push(69);
	st.push(91);

	MutantStack<int>::iterator it;
	MutantStack<int>::iterator itb = st.begin();
	it = st.end();
	std::cout << "size: " << st.size() << std::endl;
    printMsg("\tstack");
    while (itb != it)
    {
        std::cout << *itb << std::endl;
        itb++;
    }

}

int	main(void)
{
    test_subject();
    // test_02();
    test_stdList();

	return (0);
}


