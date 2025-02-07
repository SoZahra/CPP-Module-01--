/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:59:20 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/07 14:10:27 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon constructor with any weapon..." << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor..." << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout << "Weapon constructor with " << this->type << std::endl;
}

const std::string& Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}