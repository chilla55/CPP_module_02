/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:37 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 12:30:54 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
	std::cout << std::endl << "subject tests" << std::endl << std::endl;

	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << std::endl << "Test extension" << std::endl << std::endl;

	b.setRawBits(42);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	return 0;
}
