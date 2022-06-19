#include<bits/stdc++.h>

vector<int> Klargest(vector<int> &a, int k, int n) {

   sort(a.begin(),a.end());
   vector<int> s;

   int j=0;
   for(int i=a.size()-1;j<k;i--,j++){
       s.push_back(a[i]);
   }
   reverse(s.begin(),s.end());
   return s;

}
