#include<iostream>
using namespace std;

int binaryTOdecimal(int num)
{
   int ans=0;
   int x=1;
   
   while(num>0)
   {
       int lastdigit=num%10;
       ans=ans+lastdigit*x;
       x*=2;
       num/=10;
   }
   return ans;
}


int main()
{
    int n;
    cout<<"Enter binary number:";
    cin>>n;
    int a=binaryTOdecimal(n);
    cout<<a;
    return 0;
}
