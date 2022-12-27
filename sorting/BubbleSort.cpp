
#include<iostream>
using namespace std;


void BubbleSort(int arr[],int n)
{
    int temp;

    for(int i=0;i<n;i++)
    {
        for (int j = 0; j <n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
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
    BubbleSort(arr,n);
}