/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:04:40 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/28 12:53:16 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const a, Point const b, Point const c){
	Fixed area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	if (area < 0)
		return (area * Fixed(-1.0f)); // absolute value
	return area / Fixed(2.0f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed	total_area = area(a, b, c);
	Fixed	area1 = area(point, b, c);
	Fixed	area2 = area(a, point, c);
	Fixed	area3 = area(a, b, point);
	return (total_area == (area1 + area2 + area3));
}
