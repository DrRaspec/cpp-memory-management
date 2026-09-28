#ifndef CONTACT_MANAGER_H
#define CONTACT_MANAGER_H

#include "contact.h"
#include <vector>

class ContactManager {
private:
    std::vector<Contact> contacts;

public:
    void addContact();
    void viewContacts() const;
    void findContact() const;
    void editContact();
    void deleteContact();
};

#endif