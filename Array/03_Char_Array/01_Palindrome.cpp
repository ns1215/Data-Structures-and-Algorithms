#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;     //size of the string
    char a[n+1];
    cin>>a;
    int i=0,check=0;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            check=1;
            cout<<"string is not Palindrome"<<endl;
            break;
        }
    }
        if(check==0)
        {
            cout<<"String is palindrome"<<endl;
        }

    return 0;
}
