#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}

};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
    tasks.emplace_back(description);
    cout << "TASK ADDED : " << description << endl;
  }

  void completeTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        cout << "TASK COMPLETED : " << tasks[index].description << endl;
    }else {
        cout << "INVALID TASK INDEX!" << endl;
    }
  }

  void viewTasks() const {
    if (tasks.empty()){
        cout << "NO TASKS AVAILABLE." << endl;
        return;
    }
    for (size_t i=0; i < tasks.size(); ++i){
        cout << i + 1 << ". [" << (tasks[i].completed ? "X" : " ") << "] " << tasks[i].description << endl;

        }
  }

  void saveTasks (const string& ListSave) const {
    ofstream outFile(ListSave);
    if (outFile.is_open()){
        for (const auto& task : tasks) {
            outFile << task.description << "," << task.completed << endl;
        }
        outFile.close();
        cout << " TASKS SAVED TO " << ListSave << endl;
    } else {
        cout << "FAILED TO OPEN FILE FOR SAVING!" << endl;
    }

  }

  void loadTasks (const string& ListSave) {
    ifstream inFile(ListSave);
    if (inFile.is_open()) {
        tasks.clear();
        string line;
        while (getline(inFile, line)) {
            size_t commaPos = line.find(',');
            if (commaPos != string::npos) {
                string description = line.substr (0, commaPos);
                bool completed = (line.substr(commaPos + 1)== "1");
                tasks.emplace_back(description);
                tasks.back().completed = completed;
            }
        }
        inFile.close();
        cout << "Tasks loaded from " << ListSave << endl;
    }else {
        cout << "FAILED TO OPEN FILE FOR LOADING! " << endl;
    }

  }
};
