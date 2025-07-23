#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

void Contact::setField(const std::string& firstName,
                       const std::string& lastName,
                       const std::string& nickname,
                       const std::string& phoneNumber,
                       const std::string& darkestSecret) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = darkestSecret;
}

bool Contact::isEmpty() const {
    return firstName.empty() || lastName.empty() || nickname.empty()
        || phoneNumber.empty() || darkestSecret.empty();
}

static std::string formatField(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return std::string(10 - str.length(), ' ') + str;
}

void Contact::displaySummary(int index) const {
    std::cout << std::setw(10) << index << "|"
              << formatField(firstName) << "|"
              << formatField(lastName) << "|"
              << formatField(nickname) << std::endl;
}

void Contact::displayDetails() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
