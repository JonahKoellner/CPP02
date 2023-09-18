/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:04:46 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/18 10:39:05 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fpn_value = 0;
}

Fixed& Fixed::operator= ( const Fixed &fix ){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fpn_value = fix.getRawBits();
	return (*this);
}

Fixed::Fixed( Fixed &fix){
	std::cout << "Copy constructor called" << std::endl;
	// *this = fix;
	this->fpn_value = fix.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits ( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpn_value);
}
