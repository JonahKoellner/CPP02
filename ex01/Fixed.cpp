/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:04:46 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/18 12:49:33 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fpn_value = 0;
}

Fixed::Fixed( const int val ) {
	std::cout << "Int Constructor called" << std::endl;
	// It converts it to the corresponding fixed-point value.
	// The fractional bits value is initialized to 8 like in exercise 00.
	this->fpn_value = (int)val;
}

Fixed::Fixed( const float val ) {
	std::cout << "Float Constructor called" << std::endl;
	// It converts it to the corresponding fixed-point value.
	// The fractional bits value is initialized to 8 like in exercise 00.
	this->fpn_value = (int)val;
}

Fixed& Fixed::operator= ( const Fixed &fix ){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fpn_value = fix.getRawBits();
	return (*this);
}

Fixed::Fixed( const Fixed &fix ){
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	// this->fpn_value = fix.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits ( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fpn_value);
}

float Fixed::toFloat( void ) const{
	// fixed-pointer value to float
	return ((float)0.0);
}

int Fixed::toInt( void ) const {
	// fixed-point value to integer
	return (0);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fix) {
	out << fix.toFloat();
	return (out);
}
