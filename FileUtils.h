#ifndef FILEUTILS_H
#define FILEUTILS_H
#include "Task.h"
#include <fstream>
#include <vector>
#include <string>
const std::string pathname = "/tasks.txt";

void saveTasksToFile(const Task& t, const std::string &pathname);
std::vector<Task> readTasksFromFile(const std::string &pathname);

#endif