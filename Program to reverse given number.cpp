#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Input number to reverse :";
    cin>>n;
    int reverse = 0;
    
    while(n>0)
    {
        int lastdigit=0;
        lastdigit=n%10;
        reverse= reverse*10 + lastdigit;
        n=n/10;
    }
    
    cout<<"Reverse of given number :"<<reverse;
    
    return 0;
}