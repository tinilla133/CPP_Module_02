/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 19:48:31 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/19 21:51:04 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(Fixed(0)), y(Fixed(0))
{

}
Point::Point(const Fixed _x, const Fixed _y): x(Fixed(_x)), y(Fixed(_y))
{

}
Point::Point(const Point& newPoint)
{
	*this = newPoint;
}
Point& Point::operator=(const Point& newPoint)
{
	const_cast<Fixed&>(x) = newPoint.x;
	const_cast<Fixed&>(y) = newPoint.y;
	return *this;
}
		
Point::~Point()
{

}
Fixed Point::getX(void) const
{
	return this->x;
}

Fixed Point::getY(void) const
{
	return this->y;
}