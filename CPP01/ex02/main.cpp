/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:32:23 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/08 10:59:46 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

int main(void)
{
    std::string String =  "HI THIS IS BRAIN";;
    std::string& stringREF = String;
    std::string* stringPTR = &String;
    
    std::cout << &String << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << String << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}