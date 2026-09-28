#include "contact_manager.h"
#include "helpers.h"

void ContactManager::addContact() {
    Contact contact;

    contact.name = readString("Enter name: ");
    contact.phone = readString("Enter phone: ");

    if (contacts.empty()) {
        contact.id = 1;
    } else {
        contact.id = contacts.back().id + 1;
    }

    contacts.push_back(contact);

    printMessage("Contact created:");
    printMessage("Name: " + contact.name);
    printMessage("Phone: " + contact.phone);
}

void ContactManager::viewContacts() const {
    if (contacts.empty()) {
        printMessage("No contacts found.");
        return;
    }

    printMessage("=== Contacts ===");
    for (const auto& contact : contacts) {
        printMessage("ID: " + std::to_string(contact.id));
        printMessage("Name: " + contact.name);
        printMessage("Phone: " + contact.phone);
        printMessage("--------------------");
    }

    pauseScreen();
}

void ContactManager::findContact() const {
    int id = readInt("Enter ID to search: ");

    for (const auto& contact : contacts) {
        if (contact.id == id) {
            printMessage("Contact found:");
            printMessage("Name: " + contact.name);
            printMessage("Phone: " + contact.phone);
            return;
        }
    }

    printMessage("Contact not found.");
    pauseScreen();
}

void ContactManager::editContact() {
    int id = readInt("Enter ID to edit: ");

    for (auto& contact : contacts) {
        if (contact.id == id) {
            contact.name = readString("Enter new name: ");
            contact.phone = readString("Enter new phone: ");
            printMessage("Contact updated.");
            return;
        }
    }

    printMessage("Contact not found.");
}

void ContactManager::deleteContact() {
    int id = readInt("Enter ID to delete: ");

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->id == id) {
            contacts.erase(it);
            printMessage("Contact deleted.");
            return;
        }
    }

    printMessage("Contact not found.");
}