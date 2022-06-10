// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printArray(int arr[],int size){
  
    cout<<"[";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

void sumOfArray(int arr[],int size){
    
    cout<<"[";
    int sum=0;
    for(int i=0; i<size; i++){
        sum = sum+arr[i];
    }
     cout<<sum<<" ";
    cout<<"]";
}

void inputArray(int size){
    
    int arr[size];
    
    cout<<"Enter "<<size<<" elements in array"<<endl;
    for(int i=0; i<size; i++){
        cout<<"Enter "<<i<<" : ";
        cin>>arr[i];
    }
      sumOfArray(arr,size);
    //printArray(arr,size);
}

int main() {

    int size;
    
    cout<<"Enter array size : ";
    cin>>size;
    
    inputArray(size);
    
    return 0;
}
