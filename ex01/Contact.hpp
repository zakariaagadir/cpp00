#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact(); // Constructor

    void setContact(
        const std::string& firstName,
        const std::string& lastName,
        const std::string& nickname,
        const std::string& phoneNumber,
        const std::string& darkestSecret
    );

    void displaySummary(int index) const;
    void displayDetails() const;

    bool isEmpty() const;
};






#endif