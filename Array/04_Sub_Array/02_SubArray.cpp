#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    int index[n];
    ;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        index[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        int k=a[i];
        index[k]=0;
    }
    for(i=0;i<n;i++)
    {
        if(index[i]==-1)
        {
            cout<<i;
            break;
        }
    }

    
}