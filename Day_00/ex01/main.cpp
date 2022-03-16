#include <iostream>
#include <string>
#include <cctype>

int main(void)
{
	std::string  commande;

	std::cout << "Enter the command :";
	std::cin >> commande;
	if (commande.compare("ADD") == 0)
		add_user();
	else if (commande.compare("SEARCH") == 0)
		search_user();
	else if (commande.compare("EXIT") == 0)
		exit_null();
	std::cout << std::endl;
	return (0);
}