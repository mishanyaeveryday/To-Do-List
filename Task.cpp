#include "Task.h"

Task::Task(int id, const std::string& title, const std::string &description) : 
          id(id), title(title), description(description), completed_task(false){}