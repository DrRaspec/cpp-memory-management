# Contact Manager

A C++ console application created for learning memory management through a contact-manager example. The project is being built incrementally to practice storing, accessing, and eventually managing contact data in memory.

## Current Features

The interactive menu currently provides placeholders for the operations that will be implemented while learning:

- Add a contact
- View contacts
- Find a contact
- Delete a contact
- Exit the application

## Requirements

- macOS or another Unix-like system
- A C++ compiler with C++11 support or newer

The current implementation uses `unistd.h` for a short delay between menu actions, so Windows builds may require a platform-specific replacement.

## Build and Run

From the project directory, compile with:

```sh
clang++ -std=c++11 -Wall -Wextra -pedantic main.cpp -o contact_manager
```

Then run the program:

```sh
./contact_manager
```

The generated `contact_manager` executable is ignored by git.

## Project Files

- `main.cpp` - application entry point and menu logic
- `.gitignore` - ignores generated binaries, build files, and local editor metadata
