#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int findDuplicate(int arr[], int n){
    
    int temp=0, ans=0;
    for(int i=0; i<n; i++) {
        ans = arr[i];
        temp = temp^arr[i];
        if(temp == 0){
           return ans;
        }
    }
    return 0;
}

int main()
{

    int arr[5] = {1,2,3,4,3};
    int find = findDuplicate(arr,5);
    cout<<find;
    
    return 0;
}
