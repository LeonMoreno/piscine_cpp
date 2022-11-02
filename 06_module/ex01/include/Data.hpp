#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

struct Data
{
	private:
		std::string	_value;
	public:
		Data(void);
		Data(std::string value);
		Data(Data const & src);
		~Data(void);

		Data & operator=(Data const & rhs);

/* 		Setters and Getters		*/
		std::string	getValue(void);
		void		setValue(std::string v);
};

#endif
