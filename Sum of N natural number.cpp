#include<iostream>
using namespace std;

int sum(int num)
{
    int a=0;
    for(int i=1;i<=num;i++)
    {
        a+=i;
    }
    
    return a;
}

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int ans=sum(n);
    cout<<"Result : "<<ans;
    return 0;
}
