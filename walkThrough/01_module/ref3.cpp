#include <iostream>
#include <string>

class Student
{
	private:
		std::string _login;

	public:
		Student(std::string const & login);
		~Student();
		std::string* getLogin();
		std::string& getLoginRef();
		int x;
};

Student::Student(std::string const & login) : _login(login)
{
	std::cout << "student creado: " << _login << std::endl;
}

Student::~Student()
{
	std::cout << "Studen delete: " << _login << std::endl;
}

std::string*	Student::getLogin()
{
	return &(this->_login);
}

std::string&	Student::getLoginRef()
{
	return this->_login;
}

int	main(void)
{
	Student leo("lmoreno");
	Student andy("aTrujillo");

	std::cout << "GetStudentPTR " << *leo.getLogin() << std::endl;
	std::cout << "GetStudentPTR " << andy.getLogin() << std::endl;
	std::cout << "GetStudentRef " << andy.getLoginRef() << std::endl;

	andy.getLoginRef() = "Sanchez";
	std::cout << "ULTIMO GetStudentRef " << andy.getLoginRef() << std::endl;


	return (0);
}
