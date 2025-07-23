/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-19 19:38:20 by fvizcaya          #+#    #+#             */
/*   Updated: 2025-06-19 19:38:20 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
#define _POINT_HPP_

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(void);
		Point(const Fixed x, const Fixed y);
		Point(const Point& newPoint);
		Point& operator=(const Point& newPoint);
		~Point();
		Fixed getX(void) const;
		Fixed getY(void) const ;
};

#endif /* _POINT_HPP_ */