#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n)
{
    int cursum=0;
    int maxsum=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        cursum+=arr[i];
        if(cursum<0)
        {
            cursum=0;
        }
        
        maxsum=max(maxsum,cursum);
    }    
        return maxsum;
}


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int wrapsum;
    int nonwrapsum=kadane(a,n);
    int totalsum=0;
    
    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    
    wrapsum=totalsum + kadane(a,n);
    cout<<max(wrapsum,nonwrapsum);
    return 0;
    
    
}
