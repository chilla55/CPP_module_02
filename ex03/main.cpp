/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:37 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 14:46:46 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp( Point const &a, Point const &b, Point const &c, Point const &p);

void static test(int a, int b, int c, int d, int e, int f, int g, int h)
{
	const Point i(a,b);
	const Point j(c,d);
	const Point k(e,f);
	const Point point(g, h);

	bool inside = bsp(i, j, k, point);
	std::cout << "bool is inside " << inside << std::endl; 
}

int main( void )
{
	std::cout << "test edge" << std::endl;
	test(1,2,2,0,0,0,1,2);
	std::cout << std::endl << "test inside" << std::endl;
	test(1,2,2,0,0,0,1,1);
	std::cout << std::endl << "test outside" << std::endl;
	test(1,2,2,0,0,0,2,2);
	return 0;
}
