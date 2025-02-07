/*Write a program that:
b. Check whether the string is a palindrome(ignore spaces and case sensitivity)*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s,s1,rev;
    int i;
    cout<<"ENTER THE STRING"<<endl;
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {   
        if(s[i]!=' ')
        s1+=s[i];
    }
    rev.resize(s1.length());
    for(i=0;i<s1.length();i++)
    {   
        rev[s1.length()-i-1]=s1[i];
    }
    cout<<rev<<endl; 
    for(i=0;i<s1.length();i++)
    {
        s1[i]=tolower(s1[i]);
        rev[i]=tolower(rev[i]);
    }
    
    if(s1==rev) 
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a palindrome"<<endl;
    }
}