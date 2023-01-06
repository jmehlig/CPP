/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:57:55 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/30 23:15:53 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
    int numbers[] = {1, 100, 10, 70, 100};
    std::vector<int> num_vec(numbers, numbers + sizeof(numbers) / sizeof(int));
    try
	{
		std::vector<int>::iterator pos = easyfind(num_vec, 100);
		std::cout << *pos << std::endl;
        std::cout << std::distance(num_vec.begin(), pos) << std::endl;
        
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
    }
    int numbers2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> myList(numbers2, numbers2 + sizeof(numbers2) / sizeof(int));
    try
	{
		std::list<int>::iterator pos2 = easyfind(myList, 4);
		std::cout << *pos2 << std::endl;
        std::cout << std::distance(myList.begin(), pos2) << std::endl;
        std::list<int>::iterator pos3 = easyfind(myList, 100);
        
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
    return (0);
}