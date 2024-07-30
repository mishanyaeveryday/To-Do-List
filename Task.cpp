#include "Task.h"

// Реализация оператора вывода
std::ostream& operator<<(std::ostream &os, const Task &task) {
    if (task.completed) {
        return os << task.id << " [" << task.title << ": " << task.description << "] - completed";
    } else {
        return os << task.id << " [" << task.title << ": " << task.description << "] - not completed";
    }
}
