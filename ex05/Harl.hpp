/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:12:13 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/07 18:16:54 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

# define FUNC_SIZE 4

class Harl
{
	private :
		static void debug(void);
		static void info(void);
		static void warning(void);
		static void error(void);

	public :
		Harl();
		~Harl();
		void complain(std::string level);
		typedef void (*ptr_func)(void);
};

#endif