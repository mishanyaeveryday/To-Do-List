#include <iostream>
#include <fstream>
#include <string>
#include "Task.h"
#include "manageTask.h"

int main() {
    std::string pathname = "tasks.txt";
    ManageTask task(pathname);
    task.menu();
    return 0;
}