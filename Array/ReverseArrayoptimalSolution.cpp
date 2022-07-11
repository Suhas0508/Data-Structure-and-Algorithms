#include <bits/stdc++.h>
#include<iostream>
#include<math.h>

using namespace std;
void ArrayReverse(int arr[5], int size, int key){
    int index = size-1;
    int temp=0;
    int i=0;
    while(i<index){
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        i++;
        index--;  
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{

    int arr[5] = {1,2,3,4,5};
    int key = 3;   
    int size = 5;
    ArrayReverse(arr, size, key);
    return 0;
}
