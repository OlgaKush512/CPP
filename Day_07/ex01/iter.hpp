#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *x, int size, void (*fonc)(T)) //a voir
{
	for (int i = 0; i < size; i++)
		fonc(x[i]);
}

#endif
