/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:16:15 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/06 16:21:19 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

# define DEFAULT_MESSAGE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int argc, char *argv[])
{
	int	index;

	if (argc < 2)
		std::cout << DEFAULT_MESSAGE << std::endl;
	else
	{
		
		index = 0;
		while (argv[++index])
			std::cout << argv[index];
		std::cout << std::endl;
	}
}