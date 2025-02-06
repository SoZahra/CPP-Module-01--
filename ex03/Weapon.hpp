/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:50:09 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/06 18:16:02 by fzayani          ###   ########.fr       */
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
		Weapon(std::string type);
		const std::string& getType() const;
		void setType(std::string newType);
};


#endif