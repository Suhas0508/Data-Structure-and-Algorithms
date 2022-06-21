#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;
int getPivote(int arr[], int n){
    int s=-1, e=n-1;
    int mid = s+(e-s)/2;
    
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        } 
        else
            e = mid;      
        mid = s+(e-s)/2;
    }
    return s;    
}

int main()
{

    int arr[5] = {3,8,9,10,1};
    
    int s = getPivote(arr,5);
    
    cout<<"Pivote element found at Index "<<s<<endl;
   
    return 0;
}
