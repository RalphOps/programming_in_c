/* AUTHOR : EMERI RAPHAEL CHUKWUKA
  DATE CREATED : 25/11/2024
  DATE UPDATED : 29/11/2024
*/  

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "ListFunc.h"
using namespace std;

int main()
{
   ToDoList todolist;
   string command;

   todolist.loadTasks("tasks.txt");

   while (true) {
    cout << "\nToDo List Menu : " << endl;
    cout << "1. Add Task " << endl;
    cout << "2. Complete Task " << endl;
    cout << "3. View Tasks " << endl;
    cout << "4. Save Task " << endl;
    cout << "5. Load Tasks " << endl;
    cout << "6. EXIT!!! " << endl;
    cout << " Enter Your Choice : ";
    cin >> command;

    if (command == "1") {
        cout << "Enter Task Description : ";
        cin.ignore();
        string description;
        getline(cin, description);
        todolist.addTask(description);

    }else if (command == "2"){
        cout << "Enter task number to complete: ";
        int index;
        cin >> index;
        todolist.completeTask(index - 1);

    }else if (command == "3") {
        todolist.viewTasks();

    }else if (command == "4") {
        todolist.saveTasks("tasks.txt");

    }else if (command == "5") {
        todolist.loadTasks("tasks.txt");

    }else if (command == "6") {
        break;
    }else {
        cout << "INVALID CHOICE! PLEASE TRY AGAIN. " << endl;
    }
   }
    return 0;
}
