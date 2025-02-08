/*Write a program that:
b. Check whether the string is a palindrome(ignore spaces and case sensitivity)*/
#include<iostream>
#include<string>
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
    for (i = 0; i < s1.length(); i++)
    {
        if (s1[i]>='A'&&s1[i]<='Z')  
            s1[i]=s1[i]+32;
        if (rev[i]>='A'&&rev[i]<='Z')  
            rev[i]=rev[i]+32;  
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