/* 
find the transpose of the given matrix 

 */
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n],t[n][n];


    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            t[j][i]=a[i][j];
        }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}