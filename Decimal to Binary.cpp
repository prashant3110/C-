# include<iostream>
using namespace std;

int decimaltobinary(int num)
{
    int ans=0;
    int x=1;
    
    while(num>0)
    {
        int rem;
        rem=num%2;
        num=num/2;
        ans=ans+rem*x;
        x=x*10;
    }
    
    return ans;
}

int main()
{
    int n;
    cout<<"Enter decimal number : ";
    cin>>n;
    int a=decimaltobinary(n);
    cout<<a;
}
