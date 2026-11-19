#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

static bool readField(const char *prompt, std::string &field)
{
    while (true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, field))
            return false;
        if (!field.empty())
            return true;
    }
}

bool Contact::read()
{
    return readField("First name: ", firstName)
        && readField("Last name: ", lastName)
        && readField("Nickname: ", nickName)
        && readField("Phone number: ", phoneNumber)
        && readField("Darkest secret: ", darkSecret);
}

static std::string columnText(const std::string &text)
{
    if (text.size() > 10)
        return text.substr(0, 9) + ".";
    return text;
}

void Contact::printRow(int index) const
{
    std::cout << std::right
              << std::setw(10) << index << '|'
              << std::setw(10) << columnText(firstName) << '|'
              << std::setw(10) << columnText(lastName) << '|'
              << std::setw(10) << columnText(nickName) << '\n';
}

void Contact::printDetails() const
{
    std::cout << "First name: " << firstName << '\n'
              << "Last name: " << lastName << '\n'
              << "Nickname: " << nickName << '\n'
              << "Phone number: " << phoneNumber << '\n'
              << "Darkest secret: " << darkSecret << '\n';
}
