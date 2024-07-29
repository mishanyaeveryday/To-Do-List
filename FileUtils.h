#ifndef FILEUTILS_H
#define FILEUTILS_H
#include "Task.h"
#include <fstream>
#include <vector>
#include <string>

void inputTasksToFile(const std::vector<Task>& tasks, const std::string &pathname);
std::vector<Task> outputTasksFromFile(const std::string &pathname);

#endif