/*Write a program that:
d. Replace all vowels in a string with a special character*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int i;
    cout<<"ENTER THE STRING"<<endl;
    getline(cin,s);
    cout<<s<<endl;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            s[i]='*';
        }
    }
    cout<<s<<endl;
}