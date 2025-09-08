/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:21:55 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/08 16:46:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "PhoneBook.class.hpp"

# define EXIT_SUCCESS 0

int	main()
{
	std::string	input;
	PhoneBook	phoneBook;

	input = "";
	while (input != "EXIT")
	{
		std::cout << "Please input operation to perform: ";
		std::cin >> input;
		if (input == "ADD")
			phoneBook.add_contact();
		// else if (input == "SEARCH")
			// phoneBook.search_contact();
		else
			continue;
	}
	return (EXIT_SUCCESS);
}