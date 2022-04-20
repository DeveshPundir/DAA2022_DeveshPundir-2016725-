//Given an unsorted array of positive integers, design an algorithm and implement it
//using a program to find whether there are any duplicate elements in the array or not.
//(use sorting) (Time Complexity = O(n log n))
#include<iostream>
using namespace std;
void merge(int a[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int le[30];
    int ri[30];
    for (int i = 0; i < n1; i++)
    {
        le[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        ri[i] = a[m + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        
        if (le[i] < ri[j])
        {
            a[k] = le[i];
            i++;
            k++;
        }
        else
        {
            a[k] = ri[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        a[k] = le[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = ri[j];
        j++;
        k++;
    }
}
void mergesort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}
void check_duplicate(int a[],int n)
{
    int i=0,j=n-1,f=0;
     for(int i=0;i<n-1;i++)
     {
         
         if(a[i]==a[i+1])
         {
             f=1;
            
             break;
         }
         
     }
     if(f==1)
     cout<<"YES"<<endl;
     else
     cout<<"No"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a[30];
  int n;
  
  cout<<"Enter the no. of elements to be stored"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      a[i]=x;
  }
  mergesort(a,0,n-1);
  check_duplicate(a,n);
  
    }
return 0;
}
