#include<iostream>
using namespace std;

int main()
{
    int n,i,j,s,sum,k;
    cin>>n;
    cin>>s;
    int a[n];
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum>=s)
            {
                k=j;
                break;
            }
        }
        if(sum==s)
        {
            cout<<i+1<<" "<<k+1;
            break;
        }
    }
    
}