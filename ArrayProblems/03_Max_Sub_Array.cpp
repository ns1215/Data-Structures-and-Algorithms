
/* 
print the max sub array and its sum

*/


#include<iostream>
using namespace std;

int main()
{
    int n,i,j,max=0,s,l;
    cin>>n;                             //size of the array 
    int a[n];

    for(i=0;i<n;i++)                    // initializing array
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum>max)
            {
                max=sum;
                s=i;
                l=j;
            }

        }
    }
    for(i=s;i<=l;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<max;
}