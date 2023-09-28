/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:04:18 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/28 12:47:48 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(Fixed(0)), y(Fixed(0)){}

Point::Point( float const fx, float const fy): x(Fixed(fx)), y(Fixed(fy)){}

Point::Point( Point const &point ){
	*this = point;
}

Point::~Point(){
	//std::cout << "Destructor called" << std::endl;
}

Point& Point::operator= ( Point const &point ){
	const_cast<Fixed&>(x) = point.getX();
	const_cast<Fixed&>(y) = point.getY();
	return (*this);
}

Fixed Point::getX() const {
	return ((Fixed)x);
}

Fixed Point::getY() const {
	return ((Fixed)y);
}
