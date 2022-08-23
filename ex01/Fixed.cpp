/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:58 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 12:29:37 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &tocopy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawBits = tocopy.getRawBits();
}

Fixed::Fixed(const int i)
{
	std::cout << "Integer to Fixed constructor called" << std::endl;
	this->_rawBits = (i << this->_bitShift);
	if (i != ((i << this->_bitShift) >> this->_bitShift))
		std::cout << "Integer truncated" << std::endl;
}

int Fixed::toInt( void ) const
{
//	std::cout << "toInt member function called" << std::endl;
	return (this->_rawBits >> this->_bitShift);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float to Fixed constructor called" << std::endl;
	this->_rawBits = roundf(f * (1 << this->_bitShift));
}

float Fixed::toFloat( void ) const
{
//	std::cout << "toFloat member function called" << std::endl;
	int i = (1 << this->_bitShift);
	return (((float)_rawBits / i));
}

Fixed &Fixed::operator=(const Fixed &tocopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = tocopy.getRawBits();
	return (*this);
}
		
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);	
}

void Fixed::setRawBits(int const rawBits)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = rawBits;
}

std::ostream& operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}
