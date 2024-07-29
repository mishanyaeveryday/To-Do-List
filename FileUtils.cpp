#include "FileUtils.h"
#include <iostream> 
#include <algorithm>
void saveTasksToFile(const std::vector<Task>& tasks, const std::string &pathname){
    std::ofstream out_file(pathname, std::fstream::app);
    if(!out_file){
        std::cerr << "Error opening the file" << std::endl;
        exit(1);
    }
for(const Task& t : tasks){
    out_file << t.id << std::endl;
    out_file << t.title << std::endl;
    out_file << t.description << std::endl;
    out_file << t.completed_task << std::endl;
} }
std::vector<Task> readTasksFromFile(const std::string &pathname){ 
std::vector<Task> tasks;
int id;
std::string title;
std::string description;
bool completed_task;
std::ifstream in_file(pathname);
if(!in_file){
        std::cerr << "Error opening the file" << std::endl;
        exit(1);
    }
    while(in_file >> id){
    in_file.ignore();
    std::getline(in_file, title); 
    std::getline(in_file, description); 
    in_file >> completed_task;
    in_file.ignore();
    tasks.emplace_back(id, title, description, completed_task);
}
return tasks;
}