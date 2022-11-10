#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
private:
	unsigned int			_nSize;
	unsigned int			_counter;
	std::vector<int>		_vec;

public:
	Span(void);
	Span(unsigned int size);
	Span(Span const & src);
	~Span(void);
	Span & operator=(Span const & rhs);
	
/* 		Setters and Getters		*/
	int						getCounter(void) ;
	int						getSize(void) ;
	std::vector<int>		getVec(void) const;

/*		Members functions		*/

	void	addNumber(int num);
	int		longestSpan(void);
	int		shortestSpan(void);
	void	rangetSpan(std::vector<int>::iterator s, std::vector<int>::iterator f);

};

#endif
