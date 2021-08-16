#include<iostream>
using namespace std;

int main()
{
    int m1,n1,m2,n2;
    cout<<"Enter rows and columns of 1st matrix:";
    cin>>m1>>n1;
    int a[m1][n1];
    cout<<"Enter elements :";
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter rows and columns of 2nd matrix:";
    cin>>m2>>n2;
    int b[m2][n2];
    if(n1==m2)
    {
        cout<<"Enter elements:";
        for(int i=0;i<m2;i++)
        {
            for(int j=0;j<n2;j++)
            {
                cin>>b[i][j];
            }
        }
        
    }
    else
    {
        cout<<"Wrong order entered!!!!"<<endl;
        cout<<"Matrix multiplication not possible!!!!";
    }
    
    int c[m1][n2];
    
    
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n1;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
     for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<c[i][j]<<" ";
        } 
        cout<<endl;
    }
    
    return 0;
    
}     
