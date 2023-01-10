#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3,sum;
    cin>>n1>>n2>>n3;;
    int a[n1][n2],b[n2][n3],t[n1][n3];


    for(int i=0;i<n1;i++)
        for(int j=0;j<n2;j++)
        {
            cin>>a[i][j];
        }

        
    for(int i=0;i<n2;i++)
        for(int j=0;j<n3;j++)
        {
            cin>>b[i][j];
        }


    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            sum=0;
            for(int k=0;k<n2;k++)
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