/*Write a program that performs the following operations on an array:
a. Accept an integer array from the user (size determined at runtime).
b. Reverse the array and display it.*/
#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Provide the values"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ARRAY:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    cout<<"Reversed Array:"<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<"\t";
    }
}