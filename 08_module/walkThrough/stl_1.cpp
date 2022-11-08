#include <list>
#include <iostream>

int main() {

  std::list<int> l;

  l.push_back(1);
  l.push_back(42);
  l.push_back(7);

  std::list<int>::const_iterator	it;
//   std::list<int>::const_iterator	itf = l.end();

	for (it = l.begin(); it != l.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	l.sort();
	for (it = l.begin(); it != l.end(); it++)
			std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Max_size = " << l.max_size() << std::endl;
	std::cout << sizeof(int) << std::endl;


  return 0;
}
