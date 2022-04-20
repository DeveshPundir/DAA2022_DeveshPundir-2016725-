//Given a sorted array of +ve int .find 3 indexes i,j,k such that array[i]+array[j]=array[k]
#include<bits/stdc++.h>
using namespace std;


int find_index(int a[],int n)
{
    int aa,b,c;
    bool ans = false;

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]==a[k])
                {
                    aa=i+1;
                    b=j+1;
                    c=k+1;
                   
                    cout<<aa<<" "<<b<<" "<<c<<endl;
                }
            }
        }
    }

    if(!ans)
    cout<<"No sequence found!!"<<endl;

    return 0;

}


int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        
        for (int i = 0; i < n; i++)
        {
            cin>> a[i];
        }

        find_index(a,n);
        
        return 0;
    }
}
