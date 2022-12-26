//  calculating nCr value of the given value
//  formula for nCr= n!/(n-r)!*r!

#include<iostream>
using namespace std;

int facto(int n)
{
    int s= 1;
    for(int i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;

}

int main()
{
    // taking the value of n and r from the user 
    int n,r;
    float nCr;
    cin>>n>>r;
    nCr=facto(n)/(facto(n-r)*facto(r));
    cout<<nCr;
    return 0;

}