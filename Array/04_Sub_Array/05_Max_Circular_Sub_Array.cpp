
/* 
print the max sub array and its sum

*/


#include<iostream>
using namespace std;

int main()
{
    int n,i,max=0,s=0,min=0;
    cin>>n;                             //size of the array 
    int a[n],b[n];

    for(i=0;i<n;i++)                    // initializing array
    {
        cin>>a[i];
        max+=a[i];
    }

    for(i=0;i<n;i++)
    {
        s+=a[i];
        if(s>=0)
        {
            b[i]=0;
            s=0;
        }
        if(min>s)
        {
            min=s;
        }

    }
    max=max-min;
    cout<<max;
}