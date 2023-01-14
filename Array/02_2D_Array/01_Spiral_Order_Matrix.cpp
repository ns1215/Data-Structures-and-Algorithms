/* 

printing matrix in spiral Order


1   2   3   4 
5   6   7   8
9   10  11  12
13  14  15  16


 */

#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
    while(row_start<=row_end && col_start<=col_end)
    {
        for(int i=col_start;i<=col_end;i++)
        {
            cout<<a[row_start][i]<<" ";
            
        }
        row_start++;
        for(int i=row_start;i<=row_end;i++)
        {
            cout<<a[i][col_end]<<" ";
        }
        col_end--;
        for(int i=col_end;i>=col_start;i--)
        {
            cout<<a[row_end][i]<<" ";
            
        }
        row_end--;
        for(int i=row_end;i>=row_start;i--)
        {
            cout<<a[i][col_start]<<" ";
            
        }
        col_start++;

    }
    return 0;
}