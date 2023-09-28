/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:17:42 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/28 12:55:13 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main( void ) {
	Point const a(0, 0);
	Point const b(10, 30);
	Point const c(20, 0);
	Point const inside(10, 15);
	Point const outside(30, 15);

	std::cout << "a: " << a.getX() << ", " << a.getY() << " b: " << b.getX() << ", " << b.getY() << " c: " << c.getX() << ", " << c.getY() << std::endl;
	std::cout << "inside: " << inside.getX() << ", " << inside.getY() << " outside: " << outside.getX() << ", " << outside.getY() << std::endl;

	std::cout << ((bsp(a, b, c, inside) == true) ? "is inside" : "is not inside") << std::endl;
	std::cout << ((bsp(a, b, c, outside) == true) ? "is inside" : "is not inside") << std::endl;
}
