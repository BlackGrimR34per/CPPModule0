/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:21:55 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/11 15:15:16 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PhoneBook.class.hpp"
# include "../include/header_files.hpp"

# define EXIT_SUCCESS 0

int	main()
{
	std::string	input;
	PhoneBook	phoneBook;

	input = "";
	while (input != "EXIT")
	{
		std::cout << BG_GREEN << BLACK <<"Please input operation to perform: " << RESET;
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