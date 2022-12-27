
#include<iostream>
using namespace std;


void SelectionSort(int arr[],int n)
{
    int temp;

    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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
    SelectionSort(arr,n);
}