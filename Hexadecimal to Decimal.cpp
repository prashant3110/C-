#include<bits/stdc++.h>
using namespace std;

int hexadecimalTOdecimal(string s)
{
    int ans=0;
    int x=1;
    int len=s.size();
    
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            ans+=(s[i]-'0')*x;
        }
        else if(s[i]>='A'&&s[i]<='F')
        {
            ans+=(s[i]-'A'+10)*x;
        }
        
        x=x*16;
    }
    
    return ans;
}


int main()
{
    string s;
    cout<<"Enter Hexadecimal number:";
    cin>>s;
    int a = hexadecimalTOdecimal(s);
    cout<<a;
    return 0;
}
