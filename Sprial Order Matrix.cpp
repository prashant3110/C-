#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter rows and columns :";
    cin>>row>>col;
    int a[row][col];
    cout<<"Enter matrix :";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    
    
    int top=0;
    int down=row-1;
    int left=0;
    int right=col-1;
    int dia=0;
    
    while(top<=down && left<=right)
    {
        if(dia==0)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<a[top][i]<<" ";
            }
            top++;
        }
        else if(dia==1)
        {
            for(int i=top;i<=down;i++)
            {
                cout<<a[i][right]<<" ";
            }
            right--;
        }
        else if(dia==2)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<a[down][i]<<" ";
            }
            down--;
        }
        else if(dia==3)
        {
            for(int i=down;i>=top;i--)
            {
                cout<<a[i][left]<<" ";
            }
            left++;
        }
        
        dia=(dia+1)%4;
    }
    
return 0;
}
