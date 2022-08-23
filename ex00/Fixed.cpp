/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:58 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 10:58:25 by agrotzsc         ###   ########.fr       */
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
