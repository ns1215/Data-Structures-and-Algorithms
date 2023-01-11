/* 

write a code to find the product of two matrix of n order
take the value of n from the user

 */

#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cin>>n;
    int a[n][n],b[n][n],t[n][n];


    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }

        
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=0;k<n;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            t[i][j]=sum;
            cout<<sum<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}