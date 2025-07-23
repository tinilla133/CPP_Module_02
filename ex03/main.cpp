/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <fvizcaya@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-21 17:30:11 by fvizcaya          #+#    #+#             */
/*   Updated: 2025-06-21 17:30:11 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "bsp.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);
    Point p(1, 1);

    if (bsp(a, b, c, p))
        std::cout << "Point is inside the triangle\n";
    else
        std::cout << "Point is outside the triangle\n";
    return 0;
}