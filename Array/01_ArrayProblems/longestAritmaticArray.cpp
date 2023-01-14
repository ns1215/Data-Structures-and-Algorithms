#include<iostream>
using namespace std;

int main()
{
    int t,i;
    // n= number of test cases 
    cin>>t;
    while(t>0)
    {
        int n;
        // n= total number of integers in an array
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            //taking array element from the user
            cin>>a[i];
        }
        int pd,cd,c=0,m=0;
        pd=a[1]-a[0];
        for (i=1;i<n;i++)
        {
            cd=a[i+1]-a[i];
            if (cd==pd)
            {
                c++;
                if(c>m)
                {
                    m=c;
                }
            }
            else
            {
                c=0;
                pd=cd;
            }
        }
        cout<<m+2<<endl;
        t--;
    }
}