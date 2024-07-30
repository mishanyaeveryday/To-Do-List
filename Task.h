#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>

struct Task {
    int id;
    std::string title;
    std::string description;
    bool completed;

    Task(int id, const std::string& title, const std::string& description, bool completed)
        : id(id), title(title), description(description), completed(completed) {}

    // Перегрузка оператора вывода должна быть объявлена как дружественная функция
    friend std::ostream& operator<<(std::ostream &os, const Task &task);
};

#endif // TASK_H
