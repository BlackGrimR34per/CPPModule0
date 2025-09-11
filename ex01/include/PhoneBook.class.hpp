/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:07:08 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/11 15:08:46 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include "../include/header_files.hpp"

class PhoneBook
{
	Contact	contacts[8];
	int		current_index;
	void	print_cell(const std::string &text, int width) const;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add_contact(void);
		void	search_contact(void);
		int		get_number_of_contacts(void);
};

#endif