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
		found = str.find(s1, found + 1);
	}
	return (str);
}

int main(int argc, char **argv)
{
	std::ifstream	fin;
	std::ofstream	fout;
	std::string 	path;
	std::string 	s1;
	std::string		s2;
	char			ch;
	std::string		buf;
	std::stringstream		ss;


	if (argc != 4)
		std::cout << "Enter <filename>, string 1, sring 2" << std::endl;
	else
	{
		path = argv[1];
		fin.open(path);
		if (!fin.is_open())
			std::cout<< "File open error!" << std::endl;
		else
		{
			path = (std::string)argv[1] + ".replace";
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