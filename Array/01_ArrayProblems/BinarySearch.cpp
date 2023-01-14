

#include<iostream>
using namespace std;


int binary(int arr[],int key,int n)
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
    int l=n-1,s=0,m=n/2;
    while(s<=l)
    {
        m=(s+l)/2;
        if(key==arr[m])
        {
            return m;
        }
        else if (key>arr[m])
        { 
            s=m+1;

        } 
        else if(key > arr[m])
        {
            l=m-1;
        }
    }
    return -1;

}

int main()
{
    int n,key,r;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the element you want to find"<<endl;
    cin>>key;
    r=binary(arr,key,n);
    if(r>0)
    {
        cout<<r;
    }
    else
    {
        cout<<"element not found";
    }

}