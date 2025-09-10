/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:03:12 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/11 00:20:26 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Contact.class.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret):
	first_name(first_name), last_name(last_name), nickname(nickname), phone_number(phone_number), darkest_secret(darkest_secret)
{
	std::cout << "Contact has been created" << std::endl;
};

std::string	Contact::get_first_name(void)
{
	return this->first_name;
}

std::string	Contact::get_last_name(void)
{
	return this->last_name;
}

std::string Contact::get_nickname(void)
{
	return this->nickname;
}

std::string Contact::get_phone_number(void)
{
	return this->phone_number;
}

std::string Contact::get_darkest_secret(void)
{
	return this->darkest_secret;
}

bool	Contact::is_empty(void) const
{
	return (this->first_name.empty());
}
