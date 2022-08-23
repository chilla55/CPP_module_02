/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:37 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 12:43:28 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << std::endl << "toFloat testing" << std::endl << std::endl;

	Fixed e;
	Fixed const f( 420000000 );
	Fixed const g( 42.42f );
	Fixed const h( 8388607 );

	a = Fixed( 1234.4321f );

 	std::cout << "Overloaded << operator " << std::endl;
 	std::cout << "e is " << e << std::endl;
	std::cout << "f is " << f << std::endl;
	std::cout << "g is " << g << std::endl;
	std::cout << "h is " << h << std::endl; 

	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toFloat() << " as float" << std::endl;
	std::cout << "f is " << f.toInt() << " as integer" << std::endl;
	std::cout << "f is " << f.toFloat() << " as float" << std::endl;
	std::cout << "g is " << g.toInt() << " as integer" << std::endl;
	std::cout << "g is " << g.toFloat() << " as float" << std::endl;
	std::cout << "h is " << h.toInt() << " as integer" << std::endl;
	std::cout << "h is " << h.toFloat() << " as float" << std::endl;
	
	return 0;
}