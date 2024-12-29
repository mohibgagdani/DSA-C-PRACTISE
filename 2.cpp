// Question 2: Find the Middle Element of a Linked List
// Problem: Implement a function to find the middle element of a singly linked list.
// Input Example:
// Input: 1 -> 2 -> 3 -> 4 -> 5
// Output Example:
// Output: 3

#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
   
    int arr[5] = {1, 2, 3, 4, 5};  
    node* head = NULL;


    for (int i = 0; i < 5; i++) {
        if (head == NULL) {
            head = new node(arr[i]);  
        } else {
            node* tail = head;
            while (tail->next != NULL) {
                tail = tail->next;  
            }
            tail->next = new node(arr[i]);  
        }
    }

    node* temp = head;
    cout << "Linked List : ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    int size = 0;
    node* current = head;
    while (current != NULL) {
        size++;
        current = current->next;
    }

    current = head;
    int middleIndex = size / 2;
    for (int i = 0; i < middleIndex; i++) {
        current = current->next;  
    }

    cout << "middle element : " << current->data << endl;

}