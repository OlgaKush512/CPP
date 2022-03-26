#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &other);
		Fixed & operator = (const Fixed &other);

		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:

	int	_nbStock;
	static const int _nbBits = 8;
};

#endif