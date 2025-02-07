/*Write a program that performs the following operations on an array:
c. Find and display the second largest and second smallest elements in the array.*/
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int a[100],n,i;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter values in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=INT_MIN,max2=INT_MIN;
    for (i = 0; i < n; i++)
    {
        if(a[i]>max)
        {
            max2=max;
            max=a[i];
        }
        else if(a[i]>max2&&a[i]!=max)
        {
            max2=a[i];
        }
    }
    cout<<"The 2nd largest element is= "<<max2<<endl;
    int min=INT_MAX,min2=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min2=min;
            min=a[i];
        }
        else if(a[i]<min2&&a[i]!=min)
        {
            min2=a[i];
        }
    }
    cout<<"The 2nd smallest element is= "<<min2<<endl;
}