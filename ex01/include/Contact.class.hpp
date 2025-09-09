/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:21:36 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/09 15:27:56 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>

class Contact
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	public:
		Contact(){}
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string get_nickname(void);
};

#endif