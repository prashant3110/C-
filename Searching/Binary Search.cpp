#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int n,int key)
{
    int l=0;
    int h=n;
    
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(key==a[mid])
        {
            return mid;
        }
        else if(key<a[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
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
    
    cout<<binarysearch(arr,n,k);

    
    return 0;
}

