/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:21:55 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/09 14:35:16 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "../include/PhoneBook.class.hpp"

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
		else if (input == "SEARCH")
			phoneBook.search_contact();
		else
			continue;
	}
	return (EXIT_SUCCESS);
}