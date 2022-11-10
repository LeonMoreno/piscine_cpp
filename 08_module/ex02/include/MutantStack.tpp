/*********************************/
/*	Constructors and Destructors */
/*********************************/

template <typename T>
MutantStack<T>::MutantStack() {
	// std::cout << "MutantStack Default Constructor " << this << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & src) : std::stack<T>(src) {
	// std::cout << "MutantStack copy Constructor " << this << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	// std::cout << "MutantStack DesTRUCTOR " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/

/********************************/
/*		Members functions		*/
/********************************/

