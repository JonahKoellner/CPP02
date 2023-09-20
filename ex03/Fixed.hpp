/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:58:26 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/20 11:13:30 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <cmath>

class Fixed{
	private:
		int fpn_value;
		static const int fractional_bits = 8;
	public:
		Fixed(); // default constructor
		Fixed( const int val ); // constructor overload with parameter
		Fixed( const float va ); // constructor oveload with parameter
		~Fixed(); // destructor
		Fixed( const Fixed &fix ); // copy constructor
		Fixed& operator= (const Fixed &fix); // copy assingment overload
		bool operator> ( const Fixed &fix );
		bool operator< ( const Fixed &fix );
		bool operator>= ( const Fixed &fix );
		bool operator<= ( const Fixed &fix );
		bool operator== ( const Fixed &fix );
		bool operator!= ( const Fixed &fix );
		Fixed operator* ( const Fixed &fix );
		Fixed operator/ ( const Fixed &fix );
		Fixed operator+ ( const Fixed &fix );
		Fixed operator- ( const Fixed &fix );
		Fixed operator++ ( int ); //post increment
		Fixed& operator++ ( void ); // pre increment
		Fixed operator-- ( int ); // post decrement
		Fixed& operator-- ( void ); // pre increment
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed& min( Fixed& first, Fixed& second );
		static Fixed& min( const Fixed& first, const Fixed& second );
		static Fixed& max( Fixed& first, Fixed& second );
		static Fixed& max( const Fixed& first, const Fixed& second );
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);
