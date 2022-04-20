#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
#include <cstdlib>
#include <cfloat>
#include <stdint.h>

struct Data
{
	int		myInt;
	char	myChar;
	float	myFloat;
	double	myDouble;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t myPtr;

	myPtr = reinterpret_cast<uintptr_t>(ptr);
	return (myPtr);
}

Data* deserialize(uintptr_t raw)
{
	Data *myData;

	myData = reinterpret_cast<Data *>(raw);
	return (myData);
}

#endif