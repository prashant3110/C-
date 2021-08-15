#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,S;
    cout<<"Entr n :";
    cin>>n;
    cout<<"Enter S:";
    cin>>S;
    int a[n];
    cout<<"Enter Elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int i=0,j=0,st=-1,en=-1,sum=0;
    
    while(j<n && sum + a[j]<=S)
    {
        sum+=a[j];
        j++;
    }
    if(sum==S)
    {
        cout<<i+1<<","<<j<<endl;
        return 0;
    }
    
    while(j<n)
    {
        sum+=a[j];
        while(sum>S)
        {
            sum-=a[i];
            i++;
        }
        
        if(sum==S)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    
    cout<<st<<" "<<en;
}
