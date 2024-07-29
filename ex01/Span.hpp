/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:44:10 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/29 17:14:09 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>
#include <exception>
#include <algorithm>
#include <limits>
#include <vector>

class Span {
    private:

    std::vector<int> span;
    unsigned int N; 

    public:
    Span();
    Span(unsigned int N);
    Span(const Span &instance);
    Span& operator=(const Span &instance);
    ~Span();

    void addNumber(int n);
    void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    int shortestSpan();
    int longestSpan();
    
    void printSize();
    void printSpan();

    class maxN : public std::exception{
        public : 
        const char *what() const throw()
        {
            return ("Span is full\n");
        }
    };

    class minN : public std::exception{
        public : 
        const char *what() const throw()
        {
            return ("No distance found\n");
        }
    }; 
}; 