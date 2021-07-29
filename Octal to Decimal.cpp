#include<iostream>
using namespace std;

int octalTOdecimal(int num)
{
   int ans=0;
   int x=1;
   
   while(num>0)
   {
       int lastdigit=num%10;
       ans=ans+lastdigit*x;
       x*=8;
       num/=10;
   }
   return ans;
}


int main()
{
    int n;
    cout<<"Enter octal number:";
    cin>>n;
    int a=octalTOdecimal(n);
    cout<<a;
    return 0;
}
