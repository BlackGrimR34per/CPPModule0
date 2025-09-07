/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:16:15 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/07 13:53:02 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

# define DEFAULT_MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int argc, char *argv[])
{
	std::string	cpp_string;

	if (argc < 2)
		std::cout << DEFAULT_MESSAGE << std::endl;
	else
	{
		for (int index = 0; index < argc; index++)
		{
			cpp_string = argv[index];
			for (unsigned int i = 0; i < cpp_string.length(); i++)
				cpp_string[i] = toupper(cpp_string[i]);
			std::cout << cpp_string;
		}
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}