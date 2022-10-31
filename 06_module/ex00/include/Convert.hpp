#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <locale>
# include <string>

class Convert {
private:
/* data */
	std::string	_argu;
public:
	Convert(void);
	Convert(std::string argu);
	Convert(Convert const & src);
	Convert & operator=(Convert const & rhs);
	~Convert(void);

	/* Member func*/
	/* and Cast operators */
	operator char();
	operator int();
	operator float();
	operator double();

	/* 		Setters and Getters		*/
	std::string	getArgu(void);

};

void	ftPut(std::string s);

#endif
