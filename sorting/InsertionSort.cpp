
#include<iostream>
using namespace std;


void InsertionSort(int arr[],int n)
{
    int temp;

    for(int i=0;i<n;i++)
    {
        for (int j=i; j>0; j--)
        {
            if(arr[j-1]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
        
    }    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    
    int n,r;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    InsertionSort(arr,n);
}