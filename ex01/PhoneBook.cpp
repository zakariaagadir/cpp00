#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : count(0), index(0) {}

void PhoneBook::addContact(const Contact& newContact) {
    contacts[index] = newContact;
    index = (index + 1) % 8;
    if (count < 8)
        count++;
}

void PhoneBook::displayContacts() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < count; ++i) {
        contacts[i].displaySummary(i);
    }
}

void PhoneBook::displayContactDetails(int i) const {
    if (i < 0 || i >= count)
        std::cout << "Invalid index." << std::endl;
    else
        contacts[i].displayDetails();
}

int PhoneBook::getCount() const {
    return count;
}
