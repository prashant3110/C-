#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter n :";
    int n;
    cin>>n;
    cout<<"Enter elements :";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int m=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        m=max(m,a[i]);
        cout<<m<<" ";
    }

    return 0;
    
   
}

