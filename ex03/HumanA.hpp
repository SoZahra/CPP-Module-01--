/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:17:49 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/07 14:22:55 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA
{
	public:
		~HumanA();
		void attack();
		HumanA(std::string name, Weapon& weapon);

	private:
		std::string name;
		Weapon& weapon;
};


#endif