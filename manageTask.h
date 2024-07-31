#ifndef MANAGETASK_H
#define MANAGETASK_H
#include "Task.h"
#include "FileUtils.h"
#include <iostream>
#include <vector>
class ManageTask {
std::string pathname;

public:
ManageTask(const std::string &pathname);
void run();

private:
std::vector<Task> tasks;
void addTask();
void showTasks();
void changeTask();
void deleteTask();
void menu();
int idCount = 1;

};

#endif