#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool dfs(int node,vector<int>&vis,vector<vector<int>>&v,int n,int des)
{
      if(node==des)
        return true;   
     vis[node]=1;
      for(int i=1;i<v[node].size();i++)
     {
         if(vis[i]!=1 && v[node][i]!=0)
         {

           return  dfs(i,vis,v,n,des);
         }
     }
     return false;

}
int main(){
int n;
cout<<"enter the no. of nodes"<<endl;
cin>>n;
vector<vector<int>>v(n+1,vector<int>(n+1,0));

 for(int i=1;i<n+1;i++)
 {
     for(int j=1;j<=n;j++)
     cin>>v[i][j];
 }
 vector<int>vis(n+1);

 int s,des;
 cout<<"enter the two vertices"<<endl;
 cin>>s>>des;
 if(dfs(s-1,vis,v,n+1,des-1))
 cout<<"Yes Path Exists"<<endl;
else
 cout<<"No Such Path Exists";
 
return 0;
}
