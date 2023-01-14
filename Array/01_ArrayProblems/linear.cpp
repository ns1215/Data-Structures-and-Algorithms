// linear search
/*
taking an array of size n from the user 
then finding the element in the array, return the index value of the element if found
else printing "element not found " message
 
 */


#include<iostream>
using namespace std;

int main()
{
    int n,key,flag=0;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<"Enter the element you want to find"<<endl;
    cin>>key;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            cout<<i<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Element not found"<<endl;
    }

}