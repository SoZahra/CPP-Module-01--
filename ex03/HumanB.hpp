/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:02:55 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/07 14:18:25 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;

	public:
		~HumanB();
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon& weapon);
};

#endif