/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:26:30 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:26:32 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


std::string	my_replace(std::string str, std::string s1, std::string s2)
{
	std::string::size_type	found;
	if (s1.empty())
		return (str);
	found = str.find(s1);
	while (found != std::string::npos)
	{	
		str.erase(found, s1.length());
		str.insert(found, s2);
		found = str.find(s1, found + s2.size());
	}
	return (str);
}

int main(int argc, char **argv)
{
	std::ifstream	fin;
	std::ofstream	fout;
	const char * 	path;
	std::string 	s1;
	std::string		s2;
	std::string		buf;
	std::stringstream		ss;


	if (argc != 4)
	{
		std::cout << "Enter <filename>, string 1, sring 2" << std::endl;
		return (1);
	}
	else
	{
		s1 = argv[2];
		s2 = argv[3];
		path = argv[1];
		fin.open(path);
		if (!fin.is_open())
		{
			std::cout<< "File open error!" << std::endl;
			return (1);
		}
		else if (s1.empty())
		{
			std::cout<< "Error: the first string is empty!" << std::endl;
			return (1);
		}
		else
		{
			std::string temp = (std::string)argv[1] + ".replace";
			path = temp.c_str();
			fout.open(path);
			s1 = argv[2];
			s2 = argv[3];
			ss << fin.rdbuf();
			buf = my_replace(ss.str(), s1, s2);
			fout << buf;
			fout.close();
		}
		fin.close();
	}
	return (0);
}
