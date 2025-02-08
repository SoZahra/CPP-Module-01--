/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:28:56 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/08 13:45:07 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(){
	std::cout << "Start constructor of Harl..." << std::endl;
}

Harl::~Harl(){
	std::cout << "Start destructor of Harl..." << std::endl;
}

enum level {
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

void Harl::complain(std::string level)
{
	int lvl = -1;
	if (level == "DEBUG")
		lvl = DEBUG;
	else if (level == "INFO")
		lvl = INFO;
	else if (level == "WARNING")
		lvl = WARNING;
	else if (level == "ERROR")
		lvl = ERROR;

	switch (lvl)
	{
	case DEBUG :
		Harl::debug();
		// break;
	case INFO :
		Harl::info();
		// break;
	case WARNING:
		Harl::warning();
		// break;
	case ERROR:
		Harl::error();
		break;
	}

}

void Harl::debug(void)
{
	std::cout	<< "DEBUG :\n"
				<< "I love having extra bacon for my"
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< "I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout	<< "INFO :\n"
				<< "I cannot believe adding extra bacon costs more money."
				<< "You didn’t put enough bacon in my burger! If you did,"
				<< "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout	<< "WARNING:\n"
				<< "think I deserve to have some extra bacon for free."
				<< "I’ve been coming for years whereas you started working"
				<< " here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout	<< "ERROR :\n"
				<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}