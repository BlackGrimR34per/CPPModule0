/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:17:44 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/11 15:19:11 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->current_index = 0;
	std::cout << "PhoneBook has been created" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Deconstructing PhoneBook" << std::endl;
};

void	PhoneBook::print_cell(const std::string &text, int width) const
{
	int padding_left = (width - (int)text.length());
	
	std::cout << "|"
			<< std::setw(padding_left) << ""
			<< std::right << text;
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
		while (true)
		{
			std::cout << BG_WHITE << BLACK << prompts[index] << RESET;
			if (!std::getline(std::cin >> std::ws, inputs[index]))
			{
				std::cin.clear();
				clearerr(stdin);
			}
			if (!inputs[index].empty())
				break;
			std::cout << BG_RED << YELLOW << "Please enter a value!" << RESET << std::endl;
		}
	}
	Contact	new_contact(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4]);
	contacts[current_index++] = new_contact;
	current_index = current_index % 8;
}

void	PhoneBook::search_contact(void)
{
	int					column_width = 10;
	std::string			header_separator = "+----------+----------+----------+----------+\n";
	std::string			h1 = "index", h2 = "first name", h3 = "lastname", h4 = "nickname";
	std::string			seperator = "|";
	std::stringstream	ss;
	int					input;

	std::cout << header_separator;
	print_cell(h1, column_width);
	print_cell(h2, column_width);
	print_cell(h3, column_width);
	print_cell(h4, column_width);
	std::cout << "|" << std::endl;
	std::cout << header_separator;
	for (int index = 0; index < 8; index++)
	{
		ss.str("");
		ss << index + 1;
		if (this->contacts[index].is_empty() == true)
			continue;
		print_cell(ss.str(), column_width);
		print_cell(this->contacts[index].format_string(this->contacts[index].get_first_name()), column_width);
		print_cell(this->contacts[index].format_string(this->contacts[index].get_last_name()), column_width);
		print_cell(this->contacts[index].format_string(this->contacts[index].get_nickname()), column_width);
		std::cout << "|" << std::endl;
		std::cout << header_separator;
	}
	std::cout << "Please enter the index of individual to display: ";
	std::cin >> input;
	if (std::cin.fail())
	{
		std::cout << BG_RED << YELLOW << "Invalid input entered" << RESET << std::endl;
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
	else if (input < 1 || input > this->get_number_of_contacts())
		std::cout << BG_RED << YELLOW << "Invalid index selected" << RESET << std::endl;
	else
	{
		input = input - 1;
		std::cout << this->contacts[input].get_first_name() << std::endl;
		std::cout << this->contacts[input].get_last_name() << std::endl;
		std::cout << this->contacts[input].get_nickname() << std::endl;
		std::cout << this->contacts[input].get_phone_number() << std::endl;
		std::cout << this->contacts[input].get_darkest_secret() << std::endl;
	}
}

int	PhoneBook::get_number_of_contacts(void)
{
	int	count;
	
	count = 0;
	for (int index = 0; index < 8;  index++)
	{
		if (!this->contacts[index].is_empty())
			count++;
	}
	return (count);
}
