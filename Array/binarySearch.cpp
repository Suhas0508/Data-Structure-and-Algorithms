#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start=0, end=n-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        
        
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int main()
{

    int arr[10] = {1,4,5,6,7,9,10,13,34,67};
    int key = 10;
    int s = binarySearch(arr,10,6);
    
    cout<<"Index of 10 is "<<s<<endl;
    
    return 0;
}
