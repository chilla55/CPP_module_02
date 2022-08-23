/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:00:04 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 14:47:54 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H
#include <cmath>
#include <iostream>
#include "Fixed.hpp"


class Point
{
	private:
		Fixed _x;
		Fixed _y;

	public:
		Point(void);
		Point(Point &tocopy);
		Point(const Point &tocopy);
		Point(Fixed x, Fixed y);
		~Point(void);
		
		Point	&operator=(Point &tocopy);

		Fixed getX( void ) const;
		Fixed getX( void );
		Fixed getY( void ) const;
		Fixed getY( void );
		void setX( Fixed x);
		void setY( Fixed y);

		Point	operator+( Point &point);
		Point	operator-( Point &point);
};
#endif
