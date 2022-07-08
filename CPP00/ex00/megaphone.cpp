/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:09:14 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/06 14:20:11 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void PutToUpper(char c)
{
	if (c >= 'a' && c<= 'z')
		c = c - 32;
	std::cout << c;
}

int main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			if (i != 1)
				std::cout << ' ';
			while (argv[i][j])
			{
				PutToUpper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << "\n";
	}
	return 0;
}
