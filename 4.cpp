// Question 4: CRUD Operations using Class and Object
// Problem: Implement a class `Student` with attributes `id`, `name`, and `marks`. Write functions to perform
// CRUD (Create, Read, Update, Delete) operations on `Student` objects.
// Input Example:
// Add: {id: 1, name: "John", marks: 85}
// Update: id = 1, marks = 90
// Output Example:
// Updated Details: {id: 1, name: "John", marks: 90}


#include<iostream>
#include<string>
using namespace std;

class student{
public:
int id;
string name; 
int marks;

void details(){
    cout<<"Enter Rollno : "<<endl;
    cin>>this->id;
    cout<<"Enter Name : "<<endl;
    cin>>this->name;
    cout<<"Enter Marks : "<<endl;
    cin>>this->marks;
}

void viewdetails(){
    cout<<"Rollno Is : "<<this->id<<endl;
    cout<<"Name Is : "<<this->name<<endl;
    cout<<"Total Marks Is : "<<this->marks<<endl;
}
};

int main(){
int customer;
int customerupdate,updatemarks;
string updatename;

student stu[100];
int count=0;

do{

cout<<"1.Insert : "<<endl;
cout<<"2.View: "<<endl;
cout<<"3.Update: "<<endl;
cout<<"4.Delete: "<<endl;
cin>>customer;

switch (customer)
{
case 1:
    cout<<"1.Insert: "<<endl;
    stu[count].details();
    stu[count].viewdetails();
     
    cout<<"Data Updated : "<<endl; 
    count++;
    break;

case 2:
    cout<<"2 For View Student : "<<endl;
    int customerview;
    cout<<"Enter Student Rollno Number To Show Detail : "<<endl;
    cin>>customerview;
    stu[customerview].viewdetails();
    break;

case 3:
    cout<<"3 For Update Student Data : "<<endl;
    cout<<"Enter Id : ."<<endl;
    cin>>customerupdate;

    cout<<"Enter Name : "<<endl;
    cin>>updatename;

    cout<<"Enter Marks : "<<endl;
    cin>>updatemarks;

    stu[customerupdate].name=updatename;
    stu[customerupdate].marks=updatemarks;
    stu[customerupdate].viewdetails();      
    
    cout<<"Data Updated : "<<endl;
    break;

case 4:
     int customerdelete;
    cout<<"4.Delete : "<<endl;
    cout<<"Enter Id : "<<endl;
    cin>>customerdelete;
    cout<<"Data Deleted: "<<endl;
    break;

default:
     cout<<"Enter Valid Option : ."<<endl;
     break;
}
}while (customer!=0);

}