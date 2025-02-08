/*Print a spiral number pattern for given size n*/
#include<iostream>
using namespace std;
int main()
{
    int a[100][100]={0},i,j,n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int top=0,left=0,bottom=n-1,right=n-1;
    int x=1;
    while(top<=bottom&&left<=right)
    {
        for(i=left;i<=right;i++)
        {
            a[top][i]=x;
            x++;
        }
        top++;
        for(i=top;i<=bottom;i++)
        {
            a[i][right]=x;
            x++;
        }
        right--;
        for(i=right;i>=left;i--)
        {
            a[bottom][i]=x;
            x++;
        }
        bottom--;
        for(i=bottom;i>=top;i--)
        {
            a[i][left]=x;
            x++;
        }
        left++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}