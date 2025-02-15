/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 19:30:00 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/06 14:07:39 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie* heapZombie = newZombie("Heap");
	heapZombie->announce();

	randomChump("Stack");
	delete heapZombie;
	return (0);
}