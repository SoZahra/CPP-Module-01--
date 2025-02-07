/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzayani <fzayani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:08:53 by fzayani           #+#    #+#             */
/*   Updated: 2025/02/07 15:49:52 by fzayani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "You need to have : ./losers filename s1 s2 !" << std:: endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];


	//ouvrir le fichier
	std::ifstream inFile(filename.c_str());
	if(!inFile.is_open())
	{
		std::cout << "Error : file can't be open" << std::endl;
		return (1);
	}

	//creer + ouvrir le fichier
	std::string outfilename = filename + ".replace";
	std::ofstream outFile(outfilename.c_str());
	if(!outFile.is_open())
	{
		std::cout << "Error : file can't be create" << std::endl;
		inFile.close();
		return (1);
	}

	//lire le fichier
	std::string line;
	size_t pos;

	while(std::getline(inFile, line))
	{
		pos = 0;
		while((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line;
		if(!inFile.eof())
			outFile << std::endl;
	}

	inFile.close();
	outFile.close();
	return (0);
}