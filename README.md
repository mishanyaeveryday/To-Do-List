# To-Do List Console Application

## Description
A console application for managing tasks. The program allows you to add, view, edit, and delete tasks, as well as save them to a file and load them on the next run.

## Features
- Add new tasks
- View the list of tasks
- Edit existing tasks
- Delete tasks
- Save tasks to a file
- Load tasks from a file at startup

## Requirements
- C++ compiler with C++17 support (e.g., g++)
- CMake (optional, for easier build)

## Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/mishanyaeveryday/To-Do-List.git
    ```
2. Navigate to the project directory:
    ```sh
    cd to-do-list
    ```
3. Build the project:
    ```sh
    g++ -std=c++17 -g -Wall main.cpp Task.cpp ManageTask.cpp FileUtils.cpp -o main
    ```

## Usage
1. Run the application:
    ```sh
    ./main
    ```
2. Follow the menu prompts to manage your tasks.

## Project Structure
- `main.cpp`: Main file containing the entry point of the program.
- `Task.h` and `Task.cpp`: Definition and implementation of the Task class.
- `manageTask.h` and `manageTask.cpp`: Definition and implementation of the ManageTask class, which manages the tasks.
- `FileUtils.h` and `FileUtils.cpp`: Utilities for working with files.

## Example Commands
- Add a task: Enter `A` and follow the instructions.
- View tasks: Enter `S` to display all tasks.
- Edit a task: Enter `C` and follow the instructions to edit an existing task.
- Delete a task: Enter `D` and follow the instructions to delete a task.
- Quit the program: Enter `Q`.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contribution
Contributions are welcome. To contribute, please create a pull request.

## Contact
If you have any questions or suggestions, please contact me at: `mishakostenko70@gmail.com`.
