/*Write a program that:
c. Count and display the frequency of each character in the string*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i,j,c=0;
    cout<<"ENTER THE STRING"<<endl;
    getline(cin,s);
    cout<<"The entered string is: "<<s<<endl;
    cout<<"The frequency of each character is:"<<endl;
    for(i=0;i<s.length();i++)
    {
        c=0;
        for(j=0;j<s.length();j++)
        {
            if(s[j]==s[i])
            c++;
        }
        cout<<s[i]<<":"<<c<<endl;
    }
}