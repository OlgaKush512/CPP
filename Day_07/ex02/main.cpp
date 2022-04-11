# include "Array.hpp"

int main( void ) 
{
	Array<int> myArr(6);
	for(int i = 0; i < 6; i++)
		std::cout << myArr.myArr[i] << std::endl;

	return (0);
}