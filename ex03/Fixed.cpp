/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:05:09 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/19 21:31:01 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedPoint = 0;
}

Fixed::Fixed(const int intNbr)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = intNbr << numFract;
}

Fixed::Fixed(const float floatNbr)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(floatNbr * (1 << numFract));
}

Fixed::Fixed(const Fixed& fixedNbr)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixedNbr; 
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->fixedPoint) / (1 << this->numFract);
}

int	Fixed::toInt(void) const
{
	return fixedPoint >> numFract;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& fixedNbr)
{
    std::cout << "Copy assignment operator called" << std::endl;
    fixedPoint = fixedNbr.fixedPoint;
    return *this;   
}

Fixed Fixed::operator+(const Fixed& fixedNbr)
{
	return toFloat() + fixedNbr.toFloat();
}

Fixed Fixed::operator-(const Fixed& fixedNbr)
{
	return toFloat() - fixedNbr.toFloat();
}

Fixed Fixed::operator*(const Fixed& fixedNbr)
{
	return toFloat() * fixedNbr.toFloat();
}

Fixed Fixed::operator/(const Fixed& fixedNbr)
{
	return toFloat() / fixedNbr.toFloat();
}

bool Fixed::operator>(const Fixed& fixedNbr)
{
	return toFloat() > fixedNbr.toFloat();
}

bool Fixed::operator<(const Fixed& fixedNbr)
{
	return toFloat() < fixedNbr.toFloat();
}

bool Fixed::operator>=(const Fixed& fixedNbr)
{
	return toFloat() >= fixedNbr.toFloat();
}

bool Fixed::operator<=(const Fixed& fixedNbr)
{
	return toFloat() <= fixedNbr.toFloat();
}

bool Fixed::operator==(const Fixed& fixedNbr)
{
	return toFloat() == fixedNbr.toFloat();
}

Fixed &Fixed::operator++(void)
{
	fixedPoint++;
	return *this;
}

Fixed &Fixed::operator--(void)
{
	fixedPoint--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed fixedTmp = *this;
	fixedPoint++;
	return fixedTmp;
}

Fixed Fixed::operator--(int)
{
	Fixed	fixedTmp = *this;
	fixedPoint++;
	return fixedTmp;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixedPoint = raw;
}

Fixed &Fixed::min(Fixed& nbr1, Fixed& nbr2)
{
	return (nbr1.toFloat() <= nbr2.toFloat()) ? nbr1 : nbr2;
}

const Fixed &Fixed::min(const Fixed& nbr1, const Fixed& nbr2)
{
	return (nbr1.toFloat() <= nbr2.toFloat()) ? nbr1 : nbr2;
}

Fixed &Fixed::max(Fixed& nbr1, Fixed& nbr2)
{
	return (nbr1.toFloat() >= nbr2.toFloat()) ? nbr1 : nbr2;
}

const Fixed &Fixed::max(const Fixed& nbr1, const Fixed& nbr2)
{
	return (nbr1.toFloat() >= nbr2.toFloat()) ? nbr1 : nbr2;
}

std::ostream& operator<<(std::ostream&os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;	
}

