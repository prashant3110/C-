#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    int k=n;
    int sum=0;
    while(n>0)
    {
        int lastdigit=0;
        lastdigit=n%10;
        sum=sum+pow(lastdigit,3);
        n=n/10;
    }
    
    if(sum==k)
    {
        cout<<"ARMSTRONG number";
    }
    else
    {
        cout<<"Not an ARMSTRONG number";
    }
    
    return 0;
}