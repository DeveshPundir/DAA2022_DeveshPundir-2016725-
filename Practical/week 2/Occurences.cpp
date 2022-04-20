/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
   
   int t;
   cin>>t;
   while(t--)
   {
       
       int n,count=0;
       cin>>n;
       vector<int>v (n,0);
       for(int i=0;i<n;i++)
       {
        cin>>v[i];   
       }
       int key;
       cin>>key;
       int i=0,j=n-1;
       while(i<=j)
       {
           int mid=(i+j)/2;
           
           if(v[mid]>key)
           j=mid-1;
           else if(v[mid]<key)
           i=mid+1;
           else
           {
               int occur1=mid,occur2=mid;
               while(v[occur1]==v[mid])
               occur1--;
               while(v[occur2]==v[mid])
               occur2++;
               cout<<"the total no. of occurences are "<<occur2-occur1-1<<endl;
               break;
           }
       }
      
       
       
   }

    return 0;
}
