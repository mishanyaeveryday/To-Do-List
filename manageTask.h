#ifndef MANAGETASK_H
#define MANAGETASK_H
#include "Task.h"
#include "FileUtils.h"
#include <iostream>
#include <vector>
class ManageTask {

private:
std::vector<Task> tasks;
void addTask();
void showTasks();
void changeTask();
void deleteTask();
int idCount = 0;
public:
void menu();

};

#endif