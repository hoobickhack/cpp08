/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:36:41 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/29 19:45:35 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);
// return 0;
// }

int main()
{
MutantStack<int> mstack;
std::cout << "size = "<< mstack.size() << std::endl;
mstack.push(5);
mstack.push(17);
std::cout<< "haut de stack = " << mstack.top() << std::endl;
// mstack.pop();
std::cout << "size = "<< mstack.size() << std::endl;
mstack.push(5);
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
std::cout << "size = "<< mstack.size() << std::endl;
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;

std::cout << "mstack : ";
while (it != ite)
{
std::cout << *it << " ";
++it;
}
std::cout << std ::endl;

MutantStack<int> test = mstack;

std::cout << "size t = "<< test.size() << std::endl;

test.push(15);

std::cout << "size t = "<< test.size() << std::endl;

MutantStack<int>::iterator beg = test.begin();
MutantStack<int>::iterator en = test.end();


std::cout << "test : ";

while (beg != en)
{
std::cout << *beg + 1 << " ";
++beg;
}
std::cout << std ::endl;


std::stack<int> s(mstack);
return 0;
}
