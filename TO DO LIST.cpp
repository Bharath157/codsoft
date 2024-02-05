#include <iostream>
#include <vector>
#include <limits> 
using namespace std;

struct Task {
    string abouttask;
    bool completed;
};

int main() {
    vector<Task> todo;
    char option;

    do {
        string task;
        cout << "\n    TO-DO LIST   \n";
        cout << "--------------------\n";
        cout << "1) Add Task\n";
        cout << "2) View Task\n";
        cout << "3) Mark as completed\n";
        cout << "4) Delete Task\n";
        cout << "5) Exit\n";
        cout << "--------------------\n";
        cout << "Enter option[1,2,3,4,5]: ";
        cin >> option;

       
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (option) {
            case '1': {
                cout << "Enter task to add: ";
                getline(cin, task);
                Task todotask = {task, false};
                todo.push_back(todotask);
                cout << "Task Added Successfully!! :)";
                break;
            }
            case '2': {
                if (todo.empty()) {
                    cout << "There are no tasks available yet :(\n";
                } else {
                    cout << "     TASKS   \n";
                    cout << "--------------\n";
                    for (size_t i = 0; i < todo.size(); i++) {
                        cout << i + 1 << ".";
                        cout << (todo[i].completed ? "[Completed]" : "[Pending]");
                        cout << todo[i].abouttask << endl;
                    }
                }
                break;
            }
            case '3': {
                if (todo.empty()) {
                    cout << "There are no tasks available yet :(\n";
                } else {
                    size_t num;
                    cout << "Enter the number of task to be marked as Completed: ";
                    cin >> num;
                    if (num >= 1 && num <= todo.size()) {
                        todo[num - 1].completed = true;
                        cout << "Task is marked as completed successfully!! :)\n";
                    } else {
                        cout << "INVALID TASK NUMBER :(\n";
                    }
                }
                break;
            }
            case '4': {
                if (todo.empty()) {
                    cout << "There are no tasks available yet :(\n";
                } else {
                    size_t delnum;
                    cout << "Enter the number of task to be Deleted: ";
                    cin >> delnum;
                    if (delnum >= 1 && delnum <= todo.size()) {
                        todo.erase(todo.begin() + delnum - 1);
                        cout << "Task deleted successfully!! :)\n";
                    } else {
                        cout << "INVALID TASK NUMBER :(\n";
                    }
                }
                break;
            }
            case '5':
                cout << "Exiting the program :) :)\n";
                return 0;
            default:
                cout << "INVALID OPTION\n";
        }
    } while (true);
}

