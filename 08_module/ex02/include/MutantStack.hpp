#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_


# include <stack>
# include <iostream>

/* https://stackoverflow.com/questions/73440733/how-can-i-implement-my-own-stack-iterator-in-c*/
template <typename T>
class MutantStack : public std::stack<T> {
private:
/* data */
public:
	MutantStack(void);
	MutantStack(MutantStack const & src);
	MutantStack & operator=(MutantStack const & rhs);
	~MutantStack(void);

/*		Members functions		*/
	typedef T*	iterator;
	iterator	end() { return (&this->top() + 1); }
	iterator	begin() { return (end() - this->size()); }

};


#include "MutantStack.tpp"

#endif
