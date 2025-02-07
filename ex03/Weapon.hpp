/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:50:09 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/07 14:10:36 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef WEAPON_HPP
# define WEAPON_HPP


class Weapon
{
	private:
		std::string type;

	public:
		Weapon();
		~Weapon();
		Weapon(std::string type);
		const std::string& getType() const;
		void setType(std::string newType);
};


#endif