#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkSecret;
        std::string phoneNumber;

    public:
        bool read();
        void printRow(int index) const;
        void printDetails() const;
};

#endif
