#ifndef CLASS_CONTACT_H
# define CLASS_CONTACT_H

class Contact
{
	public:
		
		Contact(void); //constructure
		~Contact(void); //deconstructeur

		static int   getNbInst(void); // pou

	private:

	  static int    _NbInst;

}; //ne pas oublier ;

#endif