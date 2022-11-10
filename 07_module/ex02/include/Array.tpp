/*********************************/
/*	Constructors and Destructors */
/*********************************/

/* incialized by default*/
/* https://en.cppreference.com/w/cpp/language/default_initialization*/

template <typename T>
Array<T>::Array() {
	std::cout << "Array Default Constructor " << this << std::endl;
	this->_arr = new T();
	/*an array of n elements
	initialized by default.
	no es necesario inicializacion */
	// this->_arr[0] = 0;
	// this->_i = 0;
}

template <typename T>
Array<T>::Array(unsigned int idx) {
	std::cout << "Array INT Constructor " << this << std::endl;
	this->_arr = new T[idx];
	this->_i = static_cast<int>(idx);
	/*an array of n elements
	initialized by default.
	no es necesario inicializacion */
	// for (int j = 0; j < static_cast<int>(idx); j++)
	// 	this->_arr[j] = (j);
}

template <typename T>
Array<T>::Array(Array const & src) {
	std::cout << "Array copy Constructor " << this << std::endl;
	this->_i = src._i;
	this->_arr = new T[src._i];
	for (int j = 0; j < static_cast<int>(src._i); j++)
		this->_arr[j] = src._arr[j];
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs) {
	std::cout << "Array asignation Constructor " << this << std::endl;
	this->_i = rhs._i;
	delete this->_arr;
	this->_arr = new T[rhs._i];
	for (int j = 0; j < static_cast<int>(rhs._i); j++)
		this->_arr[j] = rhs._arr[j];
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	// std::cout << "Array DesTRUCTOR " << this << std::endl;
	if (this->_arr)
		delete []  this->_arr;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/
template <typename T>
void	Array<T>::getArray(void) const {
	for(int i = 0; i < this->_i; i++) {
		std::cout << "[" << i << "] = " << this->_arr[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
unsigned int	Array<T>::size(void) const {
	return (this->_i);
}


/********************************/
/*		Operator OVerLoad	*/
/********************************/
template <typename T>
T & Array<T>::operator[](std::size_t idx) {
	if (static_cast<int>(idx) > this->_i)
		throw(std::exception());
	return (this->_arr[idx]);
}

/********************************/
/*		Members functions		*/
/********************************/


