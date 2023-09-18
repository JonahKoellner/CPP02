/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:58:26 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/18 10:35:20 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

class Fixed{
	private:
		int fpn_value;
		static const int fractional_bits = 8;
	public:
		Fixed(); // default constructor
		~Fixed(); // desturctor
		Fixed( Fixed &fix); // copy constructor
		Fixed& operator= (const Fixed &fix); // copy assingment overload
		int getRawBits( void ) const; // member function
		void setRawBits ( int const raw ); // member function
};
