#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter Two numbers: ";
    cin>>n1>>n2;
    char ch;
    cout<<"Enter operator(+ - * / %) : ";
    cin>>ch;
    
    switch(ch)
    {
        case '+': cout<<n1+n2;
        break;
        
        case '-': cout<<n1-n2;
        break;
        
        case '*': cout<<n1*n2;
        break;
        
        case '/': cout<<n1/n2;
        break;
        
        case '%': cout<<n1%n2;
        break;
        
        default: cout<<" Wrong Operator";
        
    }
    
    return 0 ;
}
