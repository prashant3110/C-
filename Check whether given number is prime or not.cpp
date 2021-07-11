# include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter number : ";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Non Prime";
            break;
        }
    }
    if(i==n)
    {
        cout<<"Prime";
    }
    return 0;
    
}
