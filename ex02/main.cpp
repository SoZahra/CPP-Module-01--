/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:05:02 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/06 16:22:38 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "The memory address of the str variable is " << &str << std::endl;
	std::cout << "The memory address held by stringPTR is " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is " << &stringREF << std::endl;

	std::cout << "------------------------------------------" << std::endl;

	std::cout << "The value of the string variable is " << str << std::endl;
	std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is " << stringREF << std::endl;

	return 0;
}