#include "manageTask.h"

ManageTask::ManageTask(const std::string& pathname)
    : pathname(pathname), idCount(tasks.size()+1) {
}

void ManageTask::addTask(){
    std::string title;
    std::string description;
    bool completed = false;
    
    std::cout << "Enter title: ";
    std::getline(std::cin, title);

    std::cout << "Enter description: ";
    std::getline(std::cin, description);
    Task newTask(idCount++, title, description, !completed);
    tasks.push_back(newTask);
    saveTasksToFile(newTask, pathname);
}

void ManageTask::showTasks(){
  if(tasks.empty()){
    std::cout << "No tasks to show." << std::endl;
    return;
  }
   for(const Task &t : tasks) { std::cout << t << std::endl; }
}

void ManageTask::changeTask(){
    
}

void ManageTask::deleteTask(){

}
void ManageTask::menu(){
char option;

do{

std::cout << "------- Menu -------" << std::endl;
std::cout << "A - Add Task" << std::endl;
std::cout << "S - Show Tasks" << std::endl;
std::cout << "C - Change Task" << std::endl;
std::cout << "D - Delete Task" << std::endl;
std::cout << "Q - Quit" << std::endl;
std::cout << "--------------------" << std::endl;
std::cout << "Enter your option: ";
std::cin >> option;
std::cin.ignore();

    switch(option) {
  case 'a':
  case 'A':
    this->addTask();
    break;
  case 's':
  case 'S':
    this->showTasks();
    break;
  case 'c':
  case 'C':
    this->changeTask();
    break;
  case 'd':
  case 'D':
    this->deleteTask();
    break;
  case 'q':
  case 'Q':
    std::cout << "Bye" << std::endl;
    break;
  default:
  std::cout << "There is no such choice" << std::endl;
    break;
}

} while(option != 'q' && option != 'Q');

}

void ManageTask::run(){
  tasks = readTasksFromFile(this->pathname);
  this->menu();

}