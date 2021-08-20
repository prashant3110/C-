// Solution 1 
//time complexity : O(n^2)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int a[n];
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    
    int k;
    cout<<"Enter k :";
    cin>>k;
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cout<<"index:"<<i<<" "<<j<<endl;
            }
            
        }
    }
    

return 0;   
}



//solution: 2
//time complexity : O(n)
// For this array must  be sorted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int a[n];
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    
    int k;
    cout<<"Enter k :";
    cin>>k;
    
    int low=0;
    int high=n-1;
    
    while(low<high)
    {
        if(a[low]+a[high]==k)
        {
            cout<<"Index:"<<low<<" "<<high<<endl;
            return 0;
        }
        else if(a[low]+a[high]>k)
        {
            high--;   
        }
        else
        {
            low++; 
        }
    }
    

   
}


