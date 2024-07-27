/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:40:48 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/27 20:24:20 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try{

		Span sp = Span(5);
		sp.addNumber(1);
		sp.addNumber(6);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.printSpan();
		
		int i = sp.longestSpan();
		std::cout << i << std::endl;
		//std::cout << sp.shortestSpan() << std::endl;
		//std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout <<e.what();
	}
}