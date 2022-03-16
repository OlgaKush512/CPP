#include <iostream>
#include "ClassCommande.hpp"

Commande::Commande(void)
{
	std::cout << "Constructor called" << std::endl;
  	Commande::_nbInst += 1;

	return;
}

Commande::~Commande(void)
{
	std::cout << "Destructor called" << std::endl;
  	Commande::_nbInst -= 1;
	return;
}

int   Commande::getNbInst(void)
{
			return (Commande::_nbInst);
}

int  Commande::_nbInst = 0; // cette ligne initialise la valeur.