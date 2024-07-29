#include "manageTask.h"

void ManageTask::addTask(){
    std::string title;
    std::string description;
    saveTasksToFile(tasks.emplace_back(idCount++, title, description), pathname);
}
void showTasks();
void changeTask();
void deleteTask();