/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:00:21 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 14:56:44 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point(void)
{
	this->_x = 0;
	this->_y = 0;
}

Point::~Point(void)
{
}

Point::Point(Point &tocopy)
{
	this->_x = tocopy.getX();
	this->_y = tocopy.getY();
}

Point::Point(const Point &tocopy)
{
	this->_x = tocopy.getX();
	this->_y = tocopy.getY();
}

Point::Point(Fixed x, Fixed y)
{
	this->_x = x;
	this->_y = y;
}

Fixed Point::getX( void ) const
{	
	return (this->_x);
}

Fixed Point::getX( void )
{	
	return (this->_x);
}

Fixed Point::getY( void ) const
{	
	return (this->_y);
}

Fixed Point::getY( void )
{	
	return (this->_y);
}

void Point::setX(Fixed x)
{
	this->_x = x;
}

void Point::setY(Fixed y)
{
	this->_y = y;
}

Point &Point::operator=(Point &tocopy)
{
	this->_x = tocopy.getX();
	this->_y = tocopy.getY();
	return (*this);
}

Point Point::operator+(Point &point)
{
	Point result;
	result.setX(this->_x + point.getX());
	result.setY(this->_y + point.getY());
	return(result);
}

Point Point::operator-(Point &point)
{
	Point result;
	result.setX(this->_x - point.getX());
	result.setY(this->_y - point.getY());
	return (result);
}
