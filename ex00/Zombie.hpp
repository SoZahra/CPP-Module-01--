/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:45:50 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/06 13:50:52 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

public:
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);

private:
	std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif

