/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:17:15 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/16 16:17:17 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int main( void )
{
	Point point(4, 4);
	Point point1(0, 10);
	Point point2(-2, 7);


	Point t_a(1,2);
	Point t_b(1,8);
	Point t_c(8,4);

	std::cout << "Point with x: " << point.getX() << " and y: "  << point.getY() << " in the triangle: " << (bsp(t_a, t_b, t_c, point) ? "True" : "False") << std::endl;
	std::cout << "Point with x: " << point1.getX() << " and y: " << point1.getY() << " in the triangle: " << (bsp(t_a, t_b, t_c, point1) ? "True" : "False") << std::endl;
	std::cout << "Point with x: " << point2.getX() << " and y: " << point2.getY() << " in the triangle: " << (bsp(t_a, t_b, t_c, point2) ? "True" : "False") << std::endl;
	return 0;
}
