// printing the factorial of the given number

#include<iostream>
using namespace std;

void facto(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum*=i;
    }
    cout<<sum<<endl;

}

int main()
{
    int n;
    cin>>n;
    facto(n);
    return 0;

}