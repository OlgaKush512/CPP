# include "Span.hpp"

int main(void)
{
	std::cout << "______________________My_main_________________________________" << std::endl << std::endl;

	unsigned int	N = 100;
	Span			mySpan(N);
	mySpan.addAll();

	mySpan.printSpan();
	std::cout << std::endl;
	std::cout << mySpan.shortestSpan() << std::endl;
	std::cout << mySpan.longestSpan() << std::endl;

	try
	{
		mySpan.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << std::endl;
	std::cout << "______________________main_of_subject_________________________________" << std::endl << std::endl;
	
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return 0;
}