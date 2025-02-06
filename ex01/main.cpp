/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:32:59 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/06 15:56:55 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie* hordeZombie = zombieHorde(5, "FatZombie");

	for (int i = 0; i < 5; i++)
		hordeZombie[i].announce();

	delete[] hordeZombie;
	return (0);
}