/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:04:45 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 13:31:26 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.h"

//stream checking
// replace ger with ger1 loop??
void replaceInFile(std::string filename, std::string s1, std::string s2)
{
    std::ifstream in_stream;
    std::ofstream out_stream;
    std::string buffer;
    std::size_t found;
    char *temp;
    
    if (s1.empty() || s2.empty() || filename.empty())
        return ;
    in_stream.open(filename, std::ios::in);
    out_stream.open(filename.append(".replace"), std::ios::out);
    while (std::getline(in_stream, buffer))
    {
        while (1)
        {
            found = buffer.find(s1);
            if (found == std::string::npos)
                break ;
            //while compare from found size of strlen(s2) with s2
            // jump to next find
            buffer.erase(found, s1.length());
            buffer.insert(found, s2);
        }
        out_stream << buffer << "\n";
    }
}