#ifndef TASK_H
#define TASK_H
#include <ostream>
#include <string>

struct Task{
    int id;
    std::string title;
    std::string description;
    bool completed_task;
    Task(int id, const std::string& title, const std::string &description);
    friend std::ostream& operator<<(std::ostream &os, const Task &task);
};

#endif