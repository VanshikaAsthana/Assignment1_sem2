/*Write a C++ program to take a positive integer n as input and:
Check whether n is a prime number.
If it is not prime, find all its factors.
If it is prime, find the next prime number greater than n.*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,test=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n==0||n==1)
    {
        test=1;
    }
    else
    {for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            test=1;
            break;
        }
    }}
    if(test==0)
    {
        int new_pr=n+1,c=0;
        while(c==0)
        {
        int tr=0;
        for(i=2;i<new_pr;i++)
        {
            if(new_pr%i==0)
            {
                tr=1;
                break;

            }
        }
        if(tr==0)
        {
            cout<<"next prime number is: "<<new_pr;
            c=1;
        }
        else
        {
            new_pr++;
        }
        }


    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
            cout<<i<<"\t";
            }
        }
    }
}