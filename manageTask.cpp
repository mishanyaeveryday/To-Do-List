#include "manageTask.h"

ManageTask::ManageTask(const std::string& pathname)
    : pathname(pathname), idCount(tasks.size()+1) {
}

void ManageTask::addTask(){

  if(tasks.empty()){
    idCount = 1;

  } else {

    Task last_task(tasks.back());
    idCount =  last_task.id + 1;
  }

    std::string title;
    std::string description;
    bool completed = false;
    
    std::cout << "Enter title: ";
    std::getline(std::cin, title);

    std::cout << "Enter description: ";
    std::getline(std::cin, description);
    // Task newTask(idCount, title, description, completed);
    // tasks.push_back(newTask);
    // saveTasksToFile(newTask, pathname);
}

void ManageTask::showTasks(){

  if(tasks.empty()){
    std::cout << "No tasks to show." << std::endl;
    return;
  }
   for(const Task &t : tasks) { std::cout << t << std::endl; }

}

void ManageTask::changeTask(){

    std::vector <Task> temp_tasks;
    bool is_id = false;
    // tasks = readTasksFromFile(this->pathname);
    // int id = 0;
    // std::string title;
    // std::string description;
    // char option;
    std::cout << "Enter task's id: ";
    std::cin >> id;
    
    for(Task task : tasks){
      if(task.id == id){
        is_id = true;
        std::cout << std::right << std::setw(10) << "What you want to change?" << std::endl;
        std::cout <<"A - whole task" << std::endl << "T - title" << std::endl << "D - description" << std::endl << "M - mark as done" << std::endl;
        std::cout << "Enter your option: ";
        std::cin >> option;
        std::cin.ignore();
        switch(option) {

  case 'a':
  case 'A':
  std::cout << "Enter new title: ";
  std::getline(std::cin, title);
  std::cout << "Enter new description: ";
  // std::getline(std::cin, description);
  // task.title = title;
  // task.description = description;
  // break;

  case 't':
  case 'T':
  std::cout << "Enter new title: ";
  std::getline(std::cin, title);
  task.title = title;
  break;

  case 'd':
  case 'D':
  std::cout << "Enter new description: ";
  std::getline(std::cin, description);
  task.description = description;
  break; 
  case 'm':
  case 'M':
  task.completed = true;
  std::cout << "The task " << task.title << " is marked as completed" << std::endl;
  break; 

  default:
  std::cout << "There is no such choice" << std::endl;
  break;

} 
   } temp_tasks.push_back(task);
       } 
       tasks = temp_tasks;
    if(is_id == false) { std::cout << "There is no task for this id" << std::endl; }
   else {
std::ofstream file(this->pathname, std::ios::out | std::ios::trunc);
    if (!file) {
          std::cerr << "Error opening the file" << std::endl;
        exit(1);
    } 
    file.close();
    for(Task t : tasks) { saveTasksToFile(t, this->pathname); }
   }
}

void ManageTask::deleteTask(){
    std::vector <Task> temp_tasks;
    bool is_id = false;
    tasks = readTasksFromFile(this->pathname);
    int id = 0;
    char option;
    std::cout << "Enter task's id: ";
    std::cin >> id;
    
    for(Task task : tasks){
      if(task.id == id){ 
        std::cout << "Are you sure you want to delete the task " << task.title << "? [Y/N] ";
            std::cin >> option;
            std::cin.ignore();
            if(option == 'Y' || option == 'y'){
                std::cout << "Task " << task.title << " deleted." << std::endl;
                is_id = true; 
            } else {
                std::cout << "Task " << task.title << " not deleted." << std::endl;
                temp_tasks.push_back(task);
            }}
      else {
         if(is_id == true){ task.id--; }
        temp_tasks.push_back(task);
       } 
      }
       tasks = temp_tasks;
    if(is_id == false) { std::cout << "There is no task for this id" << std::endl; }
   else {
std::ofstream file(this->pathname, std::ios::out | std::ios::trunc);
    if (!file) {
          std::cerr << "Error opening the file" << std::endl;
        exit(1);
    } 
    file.close();
    for(Task t : tasks) { saveTasksToFile(t, this->pathname); }
   }
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
