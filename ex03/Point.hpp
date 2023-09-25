/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:03:57 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/20 13:37:19 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point( float const fx, float const fy );
		Point( Point const &point );
		~Point();
		Point& operator= ( Point const &point );
		Fixed getX() const;
		Fixed getY() const;
};
