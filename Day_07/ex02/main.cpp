# include "Array.hpp"
# include <string>

int main( void ) 
{
	Array<int> myArr(6);
	for(int i = 0; i < 6; i++)
		std::cout << myArr.myArr[i] << std::endl;
	
	Array<std::string> myArr2(6);
	for(int i = 0; i < 6; i++)
		std::cout << myArr2.myArr[i] << std::endl;

	return (0);
}