// Question 8: Implement Queue using Linked List
// Problem: Create a queue using a linked list and perform the following operations: Enqueue, Dequeue, and
// Display.
// Input Example:
// Enqueue: 5, 10, 15
// Dequeue: 1
// Output Example:
// Queue after operations: [10, 15]




#include <iostream>
using namespace std;

class LinkedQueue
{
public:
    int data;
    LinkedQueue *next;

    LinkedQueue(int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue
{
public:
    LinkedQueue *front;
    LinkedQueue *rear;

    Queue()
    {
        front = rear = NULL;
    }

    void enqueue(int value)
    {
        LinkedQueue *newQueue = new LinkedQueue(value);
        if (rear == NULL)
        {
            front = rear = newQueue;
        }
        else
        {
            rear->next = newQueue;
            rear = newQueue;
        }
        cout << value << " enqueued thi queue." << endl;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue Khaali che to dequeue no thay ." << endl;
            return;
        }
        LinkedQueue *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        cout << temp->data << " queue thi dequeue." << endl;
        delete temp;
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is Khaali." << endl;
            return;
        }
        cout << "Queue elements : ";

        LinkedQueue *temp = front;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Queue m;

    m.enqueue(5);
    m.enqueue(10);
    m.enqueue(15);

    m.display();
    m.dequeue();
    m.display();

}