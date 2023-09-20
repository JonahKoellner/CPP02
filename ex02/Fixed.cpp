/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:04:46 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/20 11:34:50 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	// std::cout << "Default constructor called" << std::endl;
	this->fpn_value = 0;
}

Fixed::Fixed( const int val ) {
	// std::cout << "Int Constructor called" << std::endl;
	// It converts it to the corresponding fixed-point value.
	// The fractional bits value is initialized to 8 like in exercise 00.
	this->fpn_value = val << this->fractional_bits;
}

Fixed::Fixed( const float val ) {
	// std::cout << "Float Constructor called" << std::endl;
	// It converts it to the corresponding fixed-point value.
	// The fractional bits value is initialized to 8 like in exercise 00.
	std::cout << "In fCOnstruct val " << val * (1 << this->fractional_bits) << std::endl;
	this->fpn_value = roundf(val * (1 << this->fractional_bits));
}

Fixed::Fixed( const Fixed &fix ){
	// std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	// this->fpn_value = fix.getRawBits();
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits ( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fpn_value);
}

float Fixed::toFloat( void ) const{
	// fixed-pointer value to float
	return (roundf((float)this->fpn_value) / (1 << this->fractional_bits));
}

int Fixed::toInt( void ) const {
	// fixed-point value to integer
	return (this->fpn_value >> this->fractional_bits);
}

Fixed& Fixed::operator= ( const Fixed &fix ){
	// std::cout << "Copy assignment operator called" << std::endl;
	this->fpn_value = fix.getRawBits();
	return (*this);
}

bool Fixed::operator> ( const Fixed &fix ) {
	return (this->toFloat() > fix.toFloat());
}

bool Fixed::operator< ( const Fixed &fix ) {
	return (this->toFloat() < fix.toFloat());
}

bool Fixed::operator>= ( const Fixed &fix ) {
	return (this->toFloat() >= fix.toFloat());
}

bool Fixed::operator<= ( const Fixed &fix ) {
	return (this->toFloat() <= fix.toFloat());
}

bool Fixed::operator== ( const Fixed &fix ) {
	return (this->toFloat() == fix.toFloat());
}

bool Fixed::operator!= ( const Fixed &fix ) {
	return (this->toFloat() != fix.toFloat());
}

Fixed Fixed::operator* ( const Fixed &fix ) {
	Fixed ret;
	ret.fpn_value = (this->fpn_value * fix.fpn_value) >> fractional_bits;
	return (ret);
}

Fixed Fixed::operator/ ( const Fixed &fix ) {
	Fixed ret;
	ret.fpn_value = (this->fpn_value << fractional_bits) / fix.fpn_value;
	return (ret);
}

Fixed Fixed::operator+ ( const Fixed &fix ) {
	Fixed ret;
	ret.fpn_value = this->fpn_value + fix.fpn_value;
	return (ret);
}

Fixed Fixed::operator- ( const Fixed &fix ) {
	Fixed ret;
	ret.fpn_value = this->fpn_value - fix.fpn_value;
	return (ret);
}

Fixed& Fixed::operator-- (){
	fpn_value -= (1 << fractional_bits);
	return (*this);
}

// pre increment
Fixed& Fixed::operator++ (){
	fpn_value += (1 << fractional_bits);
	return (*this);
}

Fixed Fixed::operator-- ( int ){
	Fixed ret(*this);
	--(*this);
	return (ret);
}

// post increment
Fixed Fixed::operator++ ( int ){
	Fixed ret(*this);
	++(*this);
	return (ret);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fix) {
	out << fix.toFloat();
	return (out);
}

Fixed& Fixed::min( Fixed& first, Fixed& second ){
	if (first.toFloat() > second.toFloat())
		return (second);
	return (first);
}

Fixed& Fixed::min( const Fixed& first, const Fixed& second ){
	if (first.toFloat() > second.toFloat())
		return ((Fixed&)second);
	return ((Fixed&)first);
}

Fixed& Fixed::max( Fixed& first, Fixed& second ){
	if (first.toFloat() < second.toFloat())
		return (second);
	return (first);
}

Fixed& Fixed::max( const Fixed& first, const Fixed& second ){
	if (first.toFloat() < second.toFloat())
		return ((Fixed&)second);
	return ((Fixed&)first);
}
