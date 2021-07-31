#include<bits/stdc++.h>
using namespace std;

string decimaltohexadecimal(int num)
{
    string ans="";
    while(num>0)
    {
        int rem;
        rem=num%16;
        if(rem<10)
        {
            ans+=rem + 48;
        } 
        else
        {
            ans+=rem +55;
        }
        
        num=num/16;
    }
    string s="";
    int x=ans.size();
    for(int i=x-1;i>=0;i--)
    {
        s=s+ans[i];
        
    }
    
    return s;

}

int main()
{
    int n;
    cout<<"Enter decimal number : ";
    cin>>n;
    string a = decimaltohexadecimal(n);
    cout<<a;
    return 0;
}
