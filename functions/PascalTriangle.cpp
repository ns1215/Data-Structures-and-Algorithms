/*          Pascal Triangle


1                                   0C0
1   1                               1C0 1C1
1   2   1               =>          2C0 2C1 2C2
1   3   3   1                       3C0 3C1 3C2 3C3
1   4   6   4   1                   4C0 4C1 4C2 4C3 4C4

and so on....till nth row

formula for nCr= n!/(n-r)!*r!


 */




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

float ncr(int n,int r)
{
    float nCr;
    nCr=facto(n)/(facto(n-r)*facto(r));
    return nCr;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ncr(i,j)<<" ";

        }
        cout<<endl;
    }


}