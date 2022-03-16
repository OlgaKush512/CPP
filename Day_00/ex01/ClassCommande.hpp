#ifndef CLASS_COMMANDE_H
# define CLASS_COMMANDE_H

class Commande
{
	public:
		
		Commande(void); //constructure
		~Commande(void); //deconstructeur

		static int   getNbInst(void); // pou

	private:

	  static int    _nbInst;

};

#endif