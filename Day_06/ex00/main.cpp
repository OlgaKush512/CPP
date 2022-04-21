/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:25:01 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 20:25:02 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertClass.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "Entre some char, int, float or double" << std::endl;
	else
	{
		ConvertClass MyData(argv[1]);
		MyData.printData();
	}
	return (0);
}
