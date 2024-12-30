// Question 10: Create a To-Do List Application using Class
// Problem: Implement a class `T oDoList` that supports adding tasks, viewing all tasks, marking a task as
// completed, and deleting tasks. Use a vector to store tasks.
// Input Example:
// Add: "Complete assignment", "Attend meeting"
// Mark Complete: 1
// Output Example:
// Remaining T asks: "Attend meeting"


#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> m1;
    int user=-1;
     string input;
    int index;
    string value;
    do
    {
        cout << "1.adding : " << endl;
        cout << "2.viewing : " << endl;
        cout << "3.modifing : " << endl;
        cout << "4.deleting : " << endl;
        cin >> user;
                   cin.ignore(); 


        switch (user)
        {
        case 1:
             cout << "Enter the value : ";

            getline(cin, input);
            m1.push_back(input);

            cout <<endl<< "Task added " << endl;

            break;
        case 2:
            cout << "List of value: "<<endl;

            for (string m2 : m1)
            {
                cout << m2 << " " << endl;
            }

            break;
        case 3:

            cout << "enter value for modify task :" << endl;
            cin >> index;
            cin.ignore(); 

            cout << "enter value to modify the task :" << endl;
            getline(cin, value);
            m1[index] = value;
            cout << "Updated tasks: "<< endl;

            for (string m2 : m1)
            {
                cout << m2 << " " << endl;
            }

            break;
        case 4:
            cout << "for deleting the value" << endl;

            cin >> index;
            cin.ignore(); 

            m1.erase(m1.begin() + index);

            cout << "Element deleted. "<< endl;
            cout << "Updated tasks: "<< endl;
            cout << "List of tasks: "<< endl;
            for (string m2 : m1)
            {
                cout << m2 << " " << endl;
            }
            break;

        default:
            break;
        }
        cout << endl;
        
    } 
    while (user != 0);
}