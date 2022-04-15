#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:

		Fixed(void);
		Fixed(const int my_int);
		Fixed(const float my_float);

		Fixed(Fixed const &other);
		~Fixed(void);

		Fixed & operator = (const Fixed &other);

		bool operator > (const Fixed &other);
		bool operator < (const Fixed &other);
		bool operator >= (const Fixed &other);
		bool operator <= (const Fixed &other);
		bool operator == (const Fixed &other);
		bool operator != (const Fixed &other);

		Fixed operator + (const Fixed &other);
		Fixed operator - (const Fixed &other);
		Fixed operator * (const Fixed &other);
		Fixed operator / (const Fixed &other);

		Fixed & operator ++ (void);
		Fixed operator ++ (int value);
		Fixed & operator -- (void);
		Fixed operator -- (int value);

		static Fixed & min(Fixed &one, Fixed &two);
		static Fixed const & min(const Fixed &one, const Fixed &two);
		static Fixed & max(Fixed &one, Fixed &two);
		static Fixed const & max(const Fixed &one, const Fixed &two);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

	private:

	int	_nbStock;
	static const int _nbBits = 8;
};

std::ostream& operator << (std::ostream &out, const Fixed &myFixed);

#endif
