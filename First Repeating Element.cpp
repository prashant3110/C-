#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    
    int minidx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            minidx=min(minidx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
    }
    
    minidx==INT_MAX ? cout<<"-1" : cout<<minidx;
    return 0;
}
