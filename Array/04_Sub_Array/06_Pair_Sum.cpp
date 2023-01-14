/* 

1) sorting the array in accendening order
2) comparing the sum of first and last number 
3) travering the array accordingle

 */

#include<iostream>
using namespace std;

void pairsum(int arr[], int n, int k)
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

    int s=0,e=n-1;
    while(s<e) 
    {
        if(arr[s]+arr[e]==k)
        {
            cout<<s<<" "<<e<<endl;
            cout<<"true";
            break;
        }
        else if(arr[s]+arr[e]>k)
        {
            e--;
        }
        else{
            s++;
        }

    }
}

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    pairsum(arr,n,k);

}
