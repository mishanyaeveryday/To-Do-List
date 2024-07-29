#include "Task.h"

Task::Task(int id, const std::string& title, const std::string &description) : 
          id(id), title(title), description(description), completed_task(false){}

          std::ostream& operator<<(std::ostream &os, const Task &task){
            if(task.completed_task)
            return os << task.id << " [" << task.title << ": " << task.description << "] " << "- completed"; 
              else 
                return os << task.id << " [" << task.title << ": " << task.description << "] " << "- not completed"; 
          }