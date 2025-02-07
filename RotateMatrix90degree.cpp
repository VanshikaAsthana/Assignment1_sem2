/*ROTATE THE MATRIX BY 90 DEGREE*/
#include<iostream>
using namespace std;
int main()
{
    int a[100][100],tr[100][100],n,i,j;
    cout<<"Provide the the order of matrix"<<endl;
    cin>>n;
    cout<<"Enter the values of matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Original Matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            tr[i][j]=a[j][i];
        }
        cout<<endl;
    }
    int x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            x=tr[i][j];
            tr[i][j]=tr[i][n-j-1];
            tr[i][n-j-1]=x;
        }
        cout<<endl;
    }
    cout<<"90 Degree rotated matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<tr[i][j]<<"\t";
        }
        cout<<endl;
    }

    


}