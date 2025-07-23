/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:28:19 by fvizcaya          #+#    #+#             */
/*   Updated: 2025/07/19 20:30:24 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

class Fixed
{
    private:
        int              fixedPoint;
        static const int numFract = 8;
    public:
        Fixed(void);
        Fixed(const Fixed& fixedNbr);
        Fixed& operator=(const Fixed& fixedNbr);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif