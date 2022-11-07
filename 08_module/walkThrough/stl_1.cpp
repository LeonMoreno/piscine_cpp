#include <list>
#include <iostream>

int main() {

  std::list<int> l;

  l.push_back(1);
  l.push_back(42);
  l.push_back(7);

  std::list<int>::const_iterator	it;
  std::list<int>::const_iterator	itf = l.end();

	for (it = l.begin(); it != itf; it++)
		std::cout << *it << std::endl;
	std::cout << "size = " << l.max_size() << std::endl;
	l.sort();
	for (it = l.begin(); it != itf; it++)
			std::cout << *it << std::endl;
	std::cout << sizeof(int) << std::endl;


  return 0;
}
