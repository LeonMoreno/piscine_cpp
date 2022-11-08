#include "EasyFind.hpp"

void	putMsg(std::string s) {
	std::cout << s << std::endl;
}

template <typename T>
EasyFind<T>::EasyFind(void) {
	putMsg("Constructor");
}

template <typename T>
EasyFind<T>::~EasyFind(void) {
	putMsg("DesTructor");
}
