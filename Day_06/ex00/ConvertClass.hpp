#ifndef CONVERT_CLASS_HPP
# define CONVERT_CLASS_HPP

# include <iostream>
# include <string>
# include <exception>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <cfloat>


# define INCORRECT_INPUT 1
# define OVERFLOW_INT 2
# define INCORRECT_CHAR 3
# define INT_INPUT 4

class ConvertClass
{
	public:

		ConvertClass(void);
		ConvertClass(const char *data_raw);
		ConvertClass(ConvertClass const &other);
		ConvertClass & operator = (const ConvertClass &other);
		~ConvertClass();

		void	printData(void);


	private:

		int			_type;
		const char 	*_data_raw;
		std::string	_data;
		int			_Int;
		char		_Char;
		float		_Float;
		double		_Double;

		void	_printFloatString(void);
		void	_printDoubleString(void);
		int		_fillUpDigit(void);
		int		_checkDigit(void);
		int		_fillUpData(void);
		int		_checkFloatLiteral(void);
		int		_checkChar(void);
};

#endif
