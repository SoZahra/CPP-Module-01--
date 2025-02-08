/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:27:48 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/08 13:58:50 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if(ac != 2)
	{
		std::cout << "You have to enter a level (just one)" << std::endl;
		return (1);
	}
	std::string level = av[1];
	harl.complain(level);
}