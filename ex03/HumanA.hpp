/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:17:49 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/06 18:29:23 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
	public:
		void attack();
		HumanA(std::string name, Weapon& Weapon);

	private:
		std::string name;
		Weapon& Weapon;
};


#endif