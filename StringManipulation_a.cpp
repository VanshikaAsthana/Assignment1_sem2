/*Write a program that:
a. Accepts a string from the user*/
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"ENTER THE STRING"<<endl;
    getline(cin,s);
    cout<<"The entered string is: "<<s<<endl;
}