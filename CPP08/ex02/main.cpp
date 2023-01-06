/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:46:53 by jmehlig           #+#    #+#             */
/*   Updated: 2022/09/01 18:08:19 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "First added 5, then 17, so on the top is ";
    std::cout << mstack.top() << std::endl;
    std::cout << "Now remove the 17 from the stack\n";
    mstack.pop();
    std::cout << "The size of the stack is now ";
    std::cout << mstack.size() << std::endl;
    std::cout << "5 remains on the stack, now we add 3, 5, 737, ..., 0\n";
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(-34);
    mstack.push(0.0);
    //[...]
    mstack.push(0);
    std::cout << "Lets iterate through the whole stack!\n";
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "\n\nNow rerun it with lists!\n";
    std::list<int> mstack1;
    mstack1.push_back(5);
    mstack1.push_back(17);
    std::cout << "First added 5, then 17, so on the top is ";
    std::cout << mstack1.back() << std::endl;
    std::cout << "Now remove the 17 from the list\n";
    mstack1.pop_back();
    std::cout << "The size of the list is now ";
    std::cout << mstack1.size() << std::endl;
    std::cout << "5 remains on the list, now we add 3, 5, 737, 0\n";
    mstack1.push_back(3);
    mstack1.push_back(5);
    mstack1.push_back(737);
    mstack1.push_back(-34);
    mstack1.push_back(0.0);
    //[...]
    mstack1.push_back(0);
    std::cout << "Lets iterate through the whole list!\n";
    std::list<int>::iterator it1 = mstack1.begin();
    std::list<int>::iterator ite1 = mstack1.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    std::list<int> s1(mstack1);
    return 0;
}