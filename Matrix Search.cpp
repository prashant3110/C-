/* 
for this approach rows and columns must be sorted
Time Complexity= O(n)
*/   

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col,target;
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
    
    cout<<"Enter target element :";
    cin>>target;
    
    int r=0;
    int c=col-1;
    
    while(r<row && c>=0)
    {
        if(a[r][c]==target)
        {
            cout<<"Element found"<<endl;
            cout<<"Index:"<<r+1<<","<<c+1;
            return 0;
        }
        else if(a[r][c]>target)
        {
            c--;
        }
        else
        { 
            r++;
        }
    }
    
    
  }
