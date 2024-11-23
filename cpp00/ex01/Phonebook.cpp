//
// Created by dotte on 2024-11-22.
//

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_count = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(Contact contact)
{
	if (this->contact_count < 8)
	{
		this->contacts[this->contact_count] = contact;
		this->contact_count++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
			this->contacts[i] = this->contacts[i + 1];
		this->contacts[7] = contact;
	}
}

void PhoneBook::search_contact()
{
	std::string index;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < this->contact_count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_nickname() << std::endl;
	}
	std::cout << "Enter index: ";
	std::cin >> index;
	if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
	{
		int i = index[0] - '0';
		std::cout << "First name: " << this->contacts[i].get_first_name() << std::endl;
		std::cout << "Last name: " << this->contacts[i].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
		std::cout << "Phone number: " << this->contacts[i].get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << this->contacts[i].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

void PhoneBook::print_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < this->contact_count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		std::cout << std::setw(10) << this->contacts[i].get_nickname() << std::endl;
	}
}
