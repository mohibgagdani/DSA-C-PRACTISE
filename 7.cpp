// Question 7: Working with Vectors in C++
// Problem: Write a program to demonstrate the use of vectors. Perform the following operations: Add
// elements, access elements, modify elements, and delete an element from the vector.
// Input Example:
// Add: [10, 20, 30, 40], Remove: 30
// Output Example:
// Updated Vector: [10, 20, 40]


#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> m1;
int customer;

do{
   cout<<"1.Add :"<<endl;
   cout<<"2.Access :"<<endl;
   cout<<"3.Modify :"<<endl;
   cout<<"4.Delete :"<<endl;
   cin>>customer;

   switch (customer)
   {
   case 1:
      int customeradd;
      cout<<"Add Choose"<<endl;
      cout<<"Enter Element :"<<endl;
      cin>>customeradd;
      cout<<endl;
      m1.push_back(customeradd);
     
     cout<<"Element Added"<<endl;
     cout<<endl;

     for(int m2:m1){
        cout<<m2<<" ";
     }cout<<endl; 
    cout<<endl; 
    break;

   case 2:
      cout<<"Choose the Access "<<endl;
       for(int m2:m1){
        cout<<m2<<" ";
     }cout<<endl; 
    break;

   case 3:
       int modifycustomer,customervalue;
      cout<<"Choose the Modify "<<endl;
      cout<<"Enter Number : "<<endl;
      cin>>modifycustomer;
      cout<<"Enter Value for Update : "<<endl;
      cin>>customervalue;
       m1[modifycustomer]=customervalue;
      cout<<"Element Updated"<<endl;

       for(int m2:m1){
        cout<<m2<<" ";
     }cout<<endl;  
    break;

   case 4:
      int customerpop;
      cout<<"Choose the Delete "<<endl;
      customerpop=m1.back();
      m1.pop_back();
      cout<<customerpop<<"Element Deleted"<<endl;
    break;
    
   default:
       cout<<"Enter valid option"<<endl;
    break;
   }
}
   while (customer!=0);
}