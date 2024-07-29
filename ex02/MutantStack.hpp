/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:21:25 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/29 19:03:44 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iterator>
#include <iostream>

template <typename T>

class MutantStack: public std::stack<T>{

	public :
	
	MutantStack():std::stack<T>(){}
	~MutantStack(){}
	MutantStack(const MutantStack&instance): std::stack<T>(instance){}
	MutantStack& operator=(const MutantStack&instance){
		std::stack<T>::operator=(instance);
		return *this;
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	
	iterator begin() {return this->c.begin();}	
	iterator end() {return this->c.end();}
};