//binary search
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
       int i=0,j=n-1,f=0;
       while(i<j)
       {
          count++;
           int mid=(i+j)/2;
           if(v[mid]==key)
           {
               f=1;
               cout<<count<<"comparisons and present"<<endl;
               break;
           }
           
           if(v[mid]>key)
           j=mid;
           else
           i=mid+1;
       }
       if(f==0)
       cout<<"Not present"<<endl;
       
       
   }

    return 0;
}
