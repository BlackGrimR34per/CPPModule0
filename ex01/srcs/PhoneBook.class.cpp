/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:17:44 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/08 17:00:35 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->current_index = 0;
	std::cout << "PhoneBook has been created" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	char	*prompts[5] = {
		(char *)"Please enter first name: ",
		(char *)"Please enter last name: ",
		(char *)"Please enter nickname: ",
		(char *)"Please enter phone number: ",
		(char *)"Please enter darkest secret: ",
	};

	std::string inputs[5];

	for (int index = 0; index < 5; index++)
	{
		std::cout << prompts[index];
		std::getline(std::cin >> std::ws, inputs[index]);
	}

	Contact	new_contact(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
	contacts[current_index++] = new_contact;
	current_index = current_index % 8;
}

// void	PhoneBook::search_contact(void)
// {
	
// }