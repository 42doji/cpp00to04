//
// Created by dotte on 2024-11-22.
//

#include <iostream>
#include <iomanip>
#include <sstream>
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
        this->contacts[0] = contact;
}


std::string truncate(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::print_contact()
{
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    for (int i = 0; i < this->contact_count; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].get_first_name()) << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].get_last_name()) << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].get_nickname()) << std::endl;
    }
}

void PhoneBook::search_contact()
{
	std::string index;
	print_contact();
	std::cout << "Enter index: ";
	std::cin >> index;

    int idx = 0;
    idx = index[0] - '0';
    if (idx >= this->contact_count)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
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