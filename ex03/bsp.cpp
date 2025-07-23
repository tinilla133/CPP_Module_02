/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-21 16:26:31 by fvizcaya          #+#    #+#             */
/*   Updated: 2025-06-21 16:26:31 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed fixedAbs(Fixed& nbr)
{
	nbr < 0 ? (nbr = Fixed(-1) * nbr) : nbr;
	return (nbr);
}

static Fixed area(Point const a, Point const b, Point const c)
{
	Fixed tmpArea = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
                  b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
                  c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2.0f;
	return (fixedAbs(tmpArea));
}


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed total = area(a, b, c);
    Fixed a1 = area(point, b, c);
    Fixed a2 = area(a, point, c);
    Fixed a3 = area(a, b, point);

	fixedAbs(a1);
	fixedAbs(a2);
	fixedAbs(a3);

    return (a1 + a2 + a3 == total);
}