/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:17:42 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/20 13:54:41 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);

	Point inside(10, 15);
	Point outside(4, 4);

	std::cout << bsp(a, b, c, inside) << std::endl;
	std::cout << bsp(a, b, c, outside) << std::endl;
}
