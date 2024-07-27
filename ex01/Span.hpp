/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:44:10 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/24 15:56:51 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <iostream>
#include <exception>
#include <vector>

class Span {
    private:

    std::vector<int> span;
    unsigned int N; 

    public:
    Span();
    Span(unsigned int N);
    Span(const Span &instance);
    Span &operator=(const Span &instance);
    ~Span();

    void addnumber(int n);

    int shortestSpan();
    int longestSpan();

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
            return ("no distance found\n");
        }
    }; 
}; 