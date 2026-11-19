#include "PhoneBook.hpp"
#include <string>
#include <iostream>


PhoneBook::PhoneBook() : savedNumber(0), nextIndex(0)
{
}

void PhoneBook::addContact()
{
    Contact newContact;

    if (!newContact.read())
        return;

    contacts[nextIndex] = newContact;
    if (savedNumber < 8)
        savedNumber++;
    nextIndex = (nextIndex + 1) % 8;
}

void PhoneBook::search() const
{
    if (savedNumber == 0)
    {
        std::cout << "Phonebook is empty.\n";
        return;
    }

    int i = 0;
    while (i < savedNumber)
    {
        contacts[i].printRow(i + 1);
        i++;
    }

    std::string input;
    std::cout << "Enter index: ";
    if (!std::getline(std::cin, input))
        return;

    if (input.size() != 1 || input[0] < '1' || input[0] > '8')
    {
        std::cout << "Invalid index.\n";
        return;
    }

    int index = input[0] - '1';
    if (index >= savedNumber)
    {
        std::cout << "Invalid index.\n";
        return;
    }
    contacts[index].printDetails();
}
