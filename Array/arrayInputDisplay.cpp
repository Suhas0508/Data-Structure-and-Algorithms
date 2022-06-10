#include <iostream>
using namespace std;

void printArray(int arr[],int size){
  
    cout<<"[";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}



void inputArray(int size){
    
    int arr[size];
    
    cout<<"Enter "<<size<<" elements in array"<<endl;
    for(int i=0; i<size; i++){
        cout<<"Enter "<<i<<" : ";
        cin>>arr[i];
    }
    printArray(arr,size);
}

int main() {

    int size;
    
    cout<<"Enter array size : ";
    cin>>size;
    
    inputArray(size);
    
    return 0;
}
