// Question 3: Implement Stack using Array
// Problem: Create a stack using an array and perform the following operations: Push, Pop, and Display.
// Input Example:
// Push: 10, 20, 30
// Pop: 1 (Remove the top element)
// Output Example:
// Stack after operations: [10, 20]


#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;

void push(int val) {

   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;

   else {
      top++;
      stack[top]=val;
   }
}

void pop() {
   if(top<=-1)
   cout<<"Stack is empty"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}

void display() {
   if(top>=0) {
      cout<<"Stack elements are:";

      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
} 
   else
   cout<<"Stack is empty";
}

int main() {
   int ch, val;
   cout<<"1.Push"<<endl;
   cout<<"2.Pop"<<endl;
   cout<<"3.Display"<<endl;
   
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"pushed : "<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   
}
