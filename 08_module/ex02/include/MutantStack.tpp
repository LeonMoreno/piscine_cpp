/*********************************/
/*	Constructors and Destructors */
/*********************************/

template <typename T>
MutantStack<T>::MutantStack() {
	std::cout << "MutantStack Default Constructor " << this << std::endl;
}

// // MutantStack::MutantStack(MutantStack const & src)  {
// // 	std::cout << "MutantStack copy Constructor " << this << std::endl;
// // }

// // MutantStack & MutantStack::operator=(MutantStack const & rhs) {
// // 	std::cout << "MutantStack asignation Constructor " << this << std::endl;
// // 	//this->type = a.getType();
// // 	return (*this);
// // }

template <typename T>
MutantStack<T>::~MutantStack() {
	std::cout << "MutantStack DesTRUCTOR " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/

/********************************/
/*		Members functions		*/
/********************************/

