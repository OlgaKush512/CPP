#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

template <typename T, typename U, typename M>
void iter(T x, int size, U (*fonc)(M))
{
	for (int i = 0; i < size; i++)
		fonc(x[i]);
}

#endif
