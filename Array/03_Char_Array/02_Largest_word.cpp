#include<iostream>
using namespace std;
jj
int main()
{
    int n;
    cin>>n;     //size of the string from user
    cin.ignore(); 
    char a[n+1];
    cin.getline(a,n+1);   // To accept the whole line with spaces
    cin.ignore();       // To ignore buffer
    cout<<a<<endl;
    int i,start=0,count=0,Max_length=0,k=0;
    for(int i=0;i<=n;i++)
    {
        count++;
        if(a[i] == ' ' || a[i]=='\0')
        {
            if(count-1>Max_length)
            {
                start=k;
                Max_length=count-1;

            }
            k=i+1; 
            count=0;           
        }        
    }
    for(i=start;i<Max_length+start;i++)
    cout<<a[i];

    cout<<endl<<"Length="<<Max_length;
    return 0;
}
