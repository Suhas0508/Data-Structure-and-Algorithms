#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

void threeSum(int arr[], int n,int target){
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k] == target){
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                    break;
                }
            }
        }
    }
}

int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[4] = {7,8,4,9};
    
    threeSum(arr,10,22);
    
    
    return 0;
}
