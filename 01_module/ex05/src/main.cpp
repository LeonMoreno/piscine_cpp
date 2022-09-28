/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoreno <lmoreno@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:44:20 by lmoreno           #+#    #+#             */
/*   Updated: 2022/09/28 16:44:21 by lmoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	strToint(std::string s)
{
	int	i;
	int	r;

	i = 0;
	r = 0;

	while (s[i] && (s == "DEBUG" || s == "INFO"
		|| s == "WARNING" || s == "ERROR"))
	{
		r += s[i];
		i++;
	}
	return (r);
}

int	main(void)
{
	Harl *harl;

	harl = new Harl();
	harl->complain("ERROR");

	return (0);
}
