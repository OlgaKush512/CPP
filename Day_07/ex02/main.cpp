/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:07:59 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/23 15:08:01 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
# include <stdlib.h>


#define MAX_VAL 750
int main(int, char**)
{
	std::cout << std::endl << std::endl;
	std::cout << "_________________________My_main:_empty_array_____________________________" << std::endl;
	std::cout << std::endl << std::endl;
	Array<int> num(10);
	for (int i = 0; i < 10; i++)
    {
       std::cout << num[i] << std::endl;
    }

	std::cout << std::endl << std::endl;
	std::cout << "_________________________My_main:_write_in_array_____________________________" << std::endl;
	std::cout << std::endl << std::endl;
    srand(time(NULL));
	for (int i = 0; i < 10; i++)
    {
        const int val = rand();
        num[i] = val;
        std::cout << num[i] << std::endl;
    }

	std::cout << std::endl << std::endl;
	std::cout << "_________________________Main_of_subject_____________________________" << std::endl;
	std::cout << std::endl << std::endl;
    
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
   
	Array<int> tmp = numbers;
	Array<int> test(tmp);
    

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
