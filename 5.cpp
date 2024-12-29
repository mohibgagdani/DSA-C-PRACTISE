// Question 5: Use of Constructors in C++
// Problem: Implement a class `Rectangle` with attributes `length` and `breadth`. Use a parameterized
// constructor to initialize the attributes and calculate the area of the rectangle.
// Input Example:
// Length: 5, Breadth: 10
// Output Example:
// Area: 50



#include<iostream>
using namespace std;
class Area
{
  private:
    int length;
    int breadth;
  public:
    void Length()
    {
      cout<<"\nEnter length : ";
      cin>>length;
      
      cout<<"\nEnter breadth : ";
      cin>>breadth;
    }
    int Calculation()
    {
      return (length*breadth);
    }
    void Display(int temp)
    {
      cout<<"Area: "<<temp;
    }
};
int main()
{
  Area A1;
  int temp;
  
  A1.Length();
  temp=A1.Calculation();
  A1.Display(temp);
  
}