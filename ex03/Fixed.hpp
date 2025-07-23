/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:28:19 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/06/16 20:10:51 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int              fixedPoint;
        static const int numFract = 8;
    public:
        Fixed(void);
		Fixed(const int intNbr);
		Fixed(const float floatNbr);
        Fixed(const Fixed& fixedNbr);
        Fixed& operator=(const Fixed& fixedNbr);
		Fixed operator+(const Fixed& fixedNbr);
		Fixed operator-(const Fixed& fixedNbr);
		Fixed operator*(const Fixed& fixedNbr);
		Fixed operator/(const Fixed& fixedNbr);
		bool operator>(const Fixed& fixedNbr);
		bool operator<(const Fixed& fixedNbr);
		bool operator>=(const Fixed& fixedNbr);
		bool operator<=(const Fixed& fixedNbr);
		bool operator==(const Fixed& fixedNbr);
		Fixed& operator++(void);
		Fixed& operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed& min(Fixed& nbr1, Fixed& nbr2);
		static const Fixed& min(const Fixed& nbr1, const Fixed& nbr2);
		static Fixed& max(Fixed& nbr1, Fixed& nbr2);
		static const Fixed& max(const Fixed& nbr1, const Fixed& nbr2);
        ~Fixed();
		float 	toFloat(void) const;
		int		toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixedPoint);

#endif /* _FIXED_HPP_ */
