/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:58:26 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/18 12:45:30 by jkollner         ###   ########.fr       */
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
		Fixed( const float va ); // constructor oeload wiht parameter
		~Fixed(); // desturctor
		Fixed( const Fixed &fix ); // copy constructor
		Fixed& operator= (const Fixed &fix); // copy assingment overload
		int getRawBits( void ) const; // member function
		void setRawBits ( int const raw ); // member function
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);
