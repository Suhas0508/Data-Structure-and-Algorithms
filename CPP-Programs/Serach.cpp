#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;
int getBinary(int arr[], int n, int key){

    int start=0, end=n-1;
    int mid = start+(end-start)/2;
    
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key < arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
   
}

int main()
{

    int arr[5] = {2,4,6,7,8};
    int key=8;
    int index = getBinary(arr,5,key);
    
    cout<<"Element Found at "<<index<<endl;
   
    return 0;
}
