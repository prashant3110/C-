#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int pd=a[1]-a[0]; //previous common difference
    int curr=2;      //current arithmetic subarray length
    int ans=2;      //maximum length of arithmetic subarray
    
    int j=2;
    
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
        
    }
    
    cout<<"maximum arithmetic subarray length : "<<ans;
    return 0;
}    
