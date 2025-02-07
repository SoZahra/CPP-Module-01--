/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:15:44 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/07 18:42:13 by fzayani          ###   ########.fr       */
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

void Harl::complain(std::string level)
{
	std::string names[FUNC_SIZE] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	Harl::ptr_func  funcs[FUNC_SIZE] = {
		&Harl::debug,
		&Harl::info,
		&Harl::error,
		&Harl::warning
	};

	for (int i = 0; i < FUNC_SIZE; i++)
	{
		if(names[i] == level)
			(this->*funcs[i])();
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