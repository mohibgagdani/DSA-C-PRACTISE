// Question 1: Reverse an Array
// Problem: Write a function to reverse an array of integers.
// Input Example:
// Input: [1, 2, 3, 4, 5]
// Output Example:
// Output: [5, 4, 3, 2, 1]


#include<iostream>
using namespace std;
int main()
{
    int arr[5], i;

    cout<<"Enter Elements: ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nOriginal Array :\n";

    for(i=0; i<5; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nReverse Array :\n";

    for(i=(5-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;

}