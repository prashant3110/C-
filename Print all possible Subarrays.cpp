#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter elements :";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<",";
            }
            cout<<endl;
        }
    }
    return 0; 
    
}
