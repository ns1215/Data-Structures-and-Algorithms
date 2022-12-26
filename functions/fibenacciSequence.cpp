// printing the fibenacci serires till nth element

#include<iostream>
using namespace std;

//using void function because we are not going to return any value
void fibo(int n)
{
    int n1=0,n2=1,x;
    for(int i=1;i<=n;i++)
    {
        cout<<n1<<" ";
        x=n1;
        n1=n2;
        n2+=x;
    }


}

int main()
{
    // taking the value of n from the user
    int n;
    cin>>n;
    
    // using the funtion to print the series
    fibo(n);

}