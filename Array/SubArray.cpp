/* 
    sum of all the subarray possible
    1   2   2
    subarrays:1   12  122 2   22  2
    sum:      1   3   5   2   4   2

 */



//ERROR 

#include<iostream>
using namespace std;

void SumOfSubArray(int arr[],int n)
{
    int s;
    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=i;j<n;j++)
        {
            s+=arr[j];
            cout<<s<<" ";
        }        
    }
}

int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    
    SumOfSubArray(arr,n);
}