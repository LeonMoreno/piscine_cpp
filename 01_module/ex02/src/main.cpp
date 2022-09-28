/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:57:51 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 15:57:52 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string s;
	std::string *stringPTR;

	s = "HI THIS IS BRAIN";
	stringPTR = &s;
	std::string &stringREF = s; // Se debe incializar - no puede ser NULL
	std::cout << "Memory address s: " << &s << std::endl;
	std::cout << "Memory address sPTR: " << stringPTR << std::endl;
	std::cout << "Memory address sREF: " << &stringREF << std::endl;
	std::cout << "Value s: " << s << std::endl;
	std::cout << "Value sPTR: " << *stringPTR << std::endl;
	std::cout << "Value sREF: " << stringREF << std::endl;

	return (0);
}
