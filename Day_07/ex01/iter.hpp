#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *x, size_t size, void (*fonc)( T const &)) //a voir
{
	for (size_t i = 0; i < size; i++)
		fonc(x[i]);
}

#endif
