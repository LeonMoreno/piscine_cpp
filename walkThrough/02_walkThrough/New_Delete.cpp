#include <iostream>

class Student
{
private:
	std::string	_login;
	/* data */
public:
	std::string tmp;
	Student();
	~Student();
};

// Student::Student(std::string login) : _login(login) // new sin []
Student::Student() : _login("deFault") // new con [] no puede tener parametros
{
	std::cout << "Studen " << this->_login << " is born" << std::endl;
}

Student::~Student()
{
	std::cout << "Studen " << this->_login << " died" << std::endl;
}

int	main(void)
{
	//Student *ap = new Student;
	Student *jim;

	jim = new Student;

	jim->tmp = "Hola mi Leo";
	std::cout << "tmp = " << jim->tmp << std::endl;

	 delete jim; // sin []
	//delete [] jim;
	return (0);
}

