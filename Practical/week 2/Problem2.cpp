//Given a sorted array of +ve int .find 3 indexes i,j,k such that array[i]+array[j]=array[k]
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {  vector<int> v;
  int n;
  cout<<"FIRST ENTER THE NO. OF ELEMENTS TO ENTERED THEN ENTER THE SORTED ARRAY ELEMENTS"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int a;
      cin>>a;
      v.push_back(a);

  }
  int i,j,k,f=0;
  for(int k=n-1;k>=0;k--)
  {
      int sum=v[k];
      int i=0,j=k-1;
      while(i<j)
      {
          if(v[i]+v[j]==sum)
          {
            f=1;
              cout<<i<<"," <<j<<","<<k<<endl;
              i++;
              j--;
          }
          else if( sum>v[i]+v[j])
           i++;
           else
           j--;
      }
    if(f==0)
      cout<<"No sequence Found"<<endl;
  }
  }

return 0;
}
