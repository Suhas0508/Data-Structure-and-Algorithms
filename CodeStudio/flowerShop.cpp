#include<bits/stdc++.h>
using namespace std;
int main()
{
   //Write your code here
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
       cin>>arr[i];
   sort(arr,arr+n);
   
   int count=0;
   int p=INT_MIN;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>p)
       {
           count++;
           p=arr[i]+4;
       }
   }
   cout<<count;
   return 0;
}
