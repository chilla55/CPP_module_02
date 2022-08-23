/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:47 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/23 10:50:52 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
class Fixed
{
	private:
		static const int _bitShift = 8;
		int _rawBits;

	public:
		Fixed(void);
		Fixed(const Fixed &tocopy);
		~Fixed(void);
		
		Fixed	&operator=(const Fixed &tocopy);

		int getRawBits() const;
		void setRawBits(int const rawBits);
};
#endif
