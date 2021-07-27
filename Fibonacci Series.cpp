#include<iostream>
using namespace std;

int main()
{
    int n,nextTerm=0;
    cout<<"Enter n: ";
    cin>>n;
    
    int t1=0;
    int t2=1;
    
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
        
    }
    
    return 0;
}
