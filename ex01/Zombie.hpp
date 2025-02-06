/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:33:01 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/06 15:39:12 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
	void setName(std::string name);

private:
	std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif