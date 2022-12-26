/* taking two numbers form the user and printing all the prime number between them */

#include<iostream>
using namespace std;

bool isprime(int n)
{
    //taking one flag variable whose value changes when the number is not prime
    int flag=0;
    for(int i=2;i<n;i++)
    {
        // if the number is divisible by any number between 1 to number itself then the number is not prime
        if(n%i==0)
        {   
            flag=1;
            return false;
        }
    }
    // if the flag value is still 0 means the number was not dividible by any number other than 1 and number itself
    // which implies that number is a prime number  
    if(flag==0)
    return true;
}

int main()
{
    //taking two numbers form the user

    int n1,n2;
    cin>>n1>>n2;

    for(int i=n1;i<=n2;i++)
    {
        //checking wether the number is prime or not by using a function isprime()
        if(isprime(i))
        cout<<i<<endl;

    }

}