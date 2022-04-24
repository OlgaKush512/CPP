/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:50:09 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/24 21:50:11 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main(void)
{
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::list<int> s1(mstack);

	std::list<int>::reverse_iterator it1 = mstack.rbegin();
    std::list<int>::reverse_iterator ite1 = mstack.rend();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
    std::cout << *it1 << std::endl;
    ++it1;
    }

    std::cout <<  "______it_s_myne_Motherfucker________________________________________" << std::endl;
    MutantStack<int> mstack1;
    mstack1.push(5);
    mstack1.push(17);
    std::cout << mstack1.top() << std::endl;
    mstack1.pop();
    std::cout << mstack1.size() << std::endl;
    mstack1.push(3);
    mstack1.push(5);
    mstack1.push(737);
    //[...]
    mstack1.push(0);
    MutantStack<int>::iterator it2 = mstack1.begin();
    MutantStack<int>::iterator ite2 = mstack1.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
    std::cout << *it2 << std::endl;
    ++it2;
    }
    std::stack<int> s(mstack1);

	MutantStack<int>::reverse_iterator it3 = mstack1.rbegin();
    MutantStack<int>::reverse_iterator ite3 = mstack1.rend();
    ++it3;
    --it3;
    while (it3 != ite3)
    {
    std::cout << *it3 << std::endl;
    ++it3;
    }

    return (0);
}
