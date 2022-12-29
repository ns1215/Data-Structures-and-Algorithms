/* 

1] larger than prev 
        or
2] larger then following 

 */

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,i,j,flag;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for (i=0;i<n;i++)
        {
            flag=0;
            for(j=0;j<i;j++)
            {
                if(a[j]>=a[i])
                {
                    flag++;
                    break;
                }
            }
            for(j=i+1;j<n;j++)
            {
                if(a[j]>=a[i])
                {
                    flag++;
                    break;
                }
            }
            if(i==0||i==n-1)
            {
                flag++;
            }
            if(flag <= 1)
            {
                cout<<a[i]<<"  ";
            }

        }
        t--;
    }
}
