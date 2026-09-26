#include <iostream>
#include <unistd.h>
// #include <string_view>

void printMessage(const std::string& message);

void printMenu();

void addContact();
void viewContacts();
void findContact();
void deleteContact();

// Utils
int readInt(const std::string& input);
void sleepSeconds(int seconds);

int main() {
    while(1) {
        int choice;

        printMenu();
        choice = readInt("Enter your choice: ");

        switch(choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                findContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
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

// Pass by value:
// Creates a copy of the string for this function.
// void printMessage(std::string message)

// Pass by const reference:
// Uses the original string without copying it.
// The function cannot modify the string.
// void printMessage(const std::string& message)
void printMessage(const std::string& message) {
    std::cout << message << '\n';
}

// void printMessage(std::string_view message) {
//     std::cout << message << '\n';
// }

void printMenu() {
    printMessage("=== Contact Manager ===\n\n");
    
    printMessage("1. Add Contact");
    printMessage("2. View Contacts");
    printMessage("3. Find Contact");
    printMessage("4. Delete Contact");
    printMessage("5. Exit\n");
}

void addContact() {
    printMessage("Adding a new contact...");
    // Implementation for adding a contact goes here
}

void viewContacts() {
    printMessage("Viewing all contacts...");
    // Implementation for viewing contacts goes here
}

void findContact() {
    printMessage("Finding a contact...");
    // Implementation for finding a contact goes here
}

void deleteContact() {
    printMessage("Deleting a contact...");
    // Implementation for deleting a contact goes here
}

int readInt(const std::string& message) {
    int value{};

    while (true) {
        std::cout << message;

        if (std::cin >> value) {
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(), 
                '\n'
            );

            return value;
        } 

        std::cout << "Invalid input. Please enter a valid integer." << std::endl;

        std::cin.clear();

        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), 
            '\n'
        );
    }
}

void sleepSeconds(int seconds) {
    unsigned int microseconds = 1000000;
    usleep(seconds * microseconds);
}