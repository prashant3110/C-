# include<iostream>
using namespace std;
 int main()
 {
     int n1,n2;
     cin>>n1>>n2;
     int MAX,MIN;
     
     if (n1>n2)
     {
         MAX=n1;
         MIN=n2;
     }
     else
     {
         MAX=n2;
         MIN=n1;
     }
     
     cout<<"Max. = "<<MAX<<endl;
     cout<<"Min. = "<<MIN;
    return 0; 
 }
 
