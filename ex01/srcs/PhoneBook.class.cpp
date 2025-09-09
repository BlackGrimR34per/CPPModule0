/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:17:44 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/09 15:34:04 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PhoneBook.class.hpp"
# include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->current_index = 0;
	std::cout << "PhoneBook has been created" << std::endl;
}

void	PhoneBook::print_cell(const std::string &text, int width) const
{
	int padding_left = (width - (int)text.length()) / 2;
		int padding_right = width - (int)text.length() - padding_left;

		std::cout << "|"
				<< std::setw(padding_left) << ""
				<< std::left << text
				<< std::setw(padding_right) << "";
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

void	PhoneBook::search_contact(void)
{
	int			column_width = 10;
	std::string	header_separator = "+----------+----------+----------+----------+\n";
	std::string	h1 = "index", h2 = "first name", h3 = "lastname", h4 = "nickname";
	std::string	seperator = "|";

	std::cout << header_separator;
	print_cell(h1, column_width);
	print_cell(h2, column_width);
	print_cell(h3, column_width);
	print_cell(h4, column_width);
	std::cout << "|" << std::endl;
	std::cout << header_separator;
	for (int index = 0; index < this->current_index; index++)
	{
		print_cell(std::to_string(this->current_index), column_width);
		print_cell(this->contacts[index].get_first_name(), column_width);
		print_cell(this->contacts[index].get_last_name(), column_width);
		print_cell(this->contacts[index].get_nickname(), column_width);
		std::cout << "|" << std::endl;
		std::cout << header_separator;
	}
}
