//
// Created by dotte on 2024-11-22.
//

#ifndef CPP_PHONEBOOK_HPP
#define CPP_PHONEBOOK_HPP
#include "Contact.hpp"


class PhoneBook
{
private:
	Contact contacts[8];
	int contact_count;
public:
	PhoneBook();
	~PhoneBook();
	void add_contact(Contact contact);
	void search_contact();
	void print_contact();
};

#endif //CPP_PHONEBOOK_HPP
