#include "manageTask.h"

void ManageTask::addTask(){
    std::string title;
    std::string description;
    saveTasksToFile(tasks.emplace_back(idCount++, title, description), pathname);
}

void showTasks(){
   std::vector <Task> vec = readTasksFromFile(pathname);
   for(auto v : vec) { std::cout << v << std::endl; }
}

void changeTask();
void deleteTask();