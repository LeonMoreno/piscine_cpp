#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

/*********************************/
/*	Constructors and Destructors */
/*********************************/

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm("ShrubberyCreationForm", 0, 145, 137),
	_dst("def dest") {
	// std::cout << "ShrubberyCreationForm Default Constructor " << this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string dst) :
	AForm("ShrubberyCreationForm", 0, 145, 137),
	_dst(dst) {
	// std::cout << "ShrubberyCreationForm INIT Constructor " << this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {
	this->_dst = src.getDest();
	// std::cout << "ShrubberyCreationForm copy Constructor " << this << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	// std::cout << "ShrubberyCreationForm asignation Constructor " << this << std::endl;
	this->_dst = rhs.getDest();
	this->setSign(rhs.getSign());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "ShrubberyCreationForm DesTRUCTOR " << this << std::endl;
}

/********************************/
/* 		Setters and Getters		*/
/********************************/
std::string	ShrubberyCreationForm::getDest(void) const {
	return (this->_dst);
}

/********************************/
/*		Members functions		*/
/********************************/
void	ShrubberyCreationForm::beSigned(Bureaucrat b) {
	if (b.getGrade() <= this->getGradeRequiredSign())
	{
		this->setSign(true);
		b.signForm();
		std::cout << this->getName() << std::endl;
	}
	else
	{
		std::cout << b.getName() << " couldn't sign ";
		std::cout << this->getName() << " because son grade is ";
		std::cout << b.getGrade();
		std::cout <<  " and this form need at least grade " << this->getGradeRequiredSign();
		std::cout << std::endl;
		throw AForm::GradeTooLowException();
	}
}

void	ShrubberyCreationForm::execution(void) {
	std::ofstream myfile;
	std::string tm =  this->getDest() + "_shrubbery";
	myfile.open(tm, std::ios::out | std::ios::trunc);
	if (myfile.is_open())
	{
		myfile << "      #\n";
		myfile << "     ###\n";
		myfile << "    #o###\n";
		myfile << "  #####o###\n";
		myfile << " #o###|#/###\n";
		myfile << "  ####|/#o#\n";
		myfile << "   # }|{ #\n";
		myfile << "     }|{ \n\n\n";

		myfile << "      #\n";
		myfile << "     ###\n";
		myfile << "    #o###\n";
		myfile << "  #####o###\n";
		myfile << " #o###|#/###\n";
		myfile << "  ####|/#o#\n";
		myfile << "   # }|{ #\n";
		myfile << "     }|{ \n";

		myfile.close();
	}
	else
		std::cout << "Unable to open file" << std::endl;
}

/* Operator Overload  << */

std::ostream & operator<<(std::ostream & out, ShrubberyCreationForm const & f) {
	out << "Form: " << f.getName() << " | ";
	out << "Sing: " << f.getSign() << " | ";
	out << "grade sing: " << f.getGradeRequiredSign() << " | ";
	out << "grade exe: " << f.getGradeRequiredEx()  << " | ";
	out << "dest: " << f.getDest();
	return (out);
}
