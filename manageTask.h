#ifndef MANAGETASK_H
#define MANAGETASK_H
#include "Task.h"
#include "FileUtils.h"
#include <iostream>
#include <vector>
class ManageTask {

protected:
int idCount = 0;

private:
std::vector<Task> tasks;
void addTask();
void showTasks();
void changeTask();
void deleteTask();

public:
void menu();

};

#endif