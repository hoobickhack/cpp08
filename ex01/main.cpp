/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:40:48 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/29 18:08:53 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try{		
		Span sp = Span(8);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		// Span sp = Span(10000);
		// std::vector<int> vec;
		// for (int i = 0; i < 20000; i++){
		// 	if ( i % 2 == 0)
		// 		vec.push_back(i);
		// }
		// sp.addNumbers(vec.begin(), vec.end());
		// sp.printSize();
		
		//sp.printSpan();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout <<e.what();
	}
}