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
void deleteTask(const int &id);
int idCount;
public:
void menu();

};

#endif