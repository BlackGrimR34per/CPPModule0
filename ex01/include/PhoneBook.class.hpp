/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:07:08 by yosherau          #+#    #+#             */
/*   Updated: 2025/09/09 15:15:19 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook
{
	Contact	contacts[8];
	int		current_index;
	void	print_cell(const std::string &text, int width) const;

	public:
		PhoneBook(void);
		void	add_contact();
		void	search_contact();
};

#endif