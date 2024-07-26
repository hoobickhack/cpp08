/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:27:52 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/23 19:29:25 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iterator>
#include <exception>
#include <vector>
#include <iostream>


class notfound : public std ::exception
{
    public:
    	virtual const char* what() const throw(){
			return ("Error, element not found");
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int entier)
{
	typename T::iterator it = std::find(container.begin(), container.end(), entier);
	if (it == container.end())
		throw notfound();
	return(it); 
}