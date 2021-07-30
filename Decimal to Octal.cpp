# include<iostream>
using namespace std;

int decimaltoOctal(int num)
{
    int ans=0;
    int x=1;
    
    while(num>0)
    {
        int rem;
        rem=num%8;
        num=num/8;
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
    int a=decimaltoOctal(n);
    cout<<a;
}
