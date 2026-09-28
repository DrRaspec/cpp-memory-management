#include <iostream>
// #include <string_view>

#include "contact_manager.h"
#include "helpers.h"

void printMenu();

int main() {
    ContactManager manager;

    while(true) {

        printMenu();
        int choice = readInt("Enter your choice: ");

        switch(choice) {
            case 1:
                manager.addContact();
                break;
            case 2:
                manager.viewContacts();
                break;
            case 3:
                manager.findContact();
                break;
            case 4:
                manager.editContact();
                break;
            case 5:
                manager.deleteContact();
                break;
            case 6:
                printMessage("Exiting...");
                return 0;
            default:
                printMessage("Invalid choice. Please try again.");
        }

        sleepSeconds(1);
        system("clear");
    }
    
    return 0;
}

void printMenu() {
    printMessage("=== Contact Manager ===\n");

    printMessage("1. Add Contact");
    printMessage("2. View Contacts");
    printMessage("3. Find Contact");
    printMessage("4. Edit Contact");
    printMessage("5. Delete Contact");
    printMessage("6. Exit\n");
}