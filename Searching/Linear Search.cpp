#include<bits/stdc++.h>
using namespace std;

int linearsearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
        }
      
    }
     return -1;
        
    
    
}

int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int k;
    cout<<"Enter Key element :";
    cin>>k;
    
    cout<<linearsearch(arr,n,k);

    
    return 0;
}

