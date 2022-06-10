// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void searchArray(int arr[],int key,int size){
    int count = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            count=1;
            cout<<"Element "<<arr[i]<<" Found at "<<i<<" position.";
            break;
        }
    }
    if(count == 0){
        cout<<"Element not found";
    }
}

void printArray(int arr[],int size){
    int key;
    cout<<"Given Array : ";
    cout<<"[";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    
    cout<<"Search element for : ";
    cin>>key;
    
    searchArray(arr,key,size);
     
}

void inputArray(int arr[], int size){
    
    cout<<"Enter "<<size<<" elements in array"<<endl;
    for(int i=0; i<size; i++){
        cout<<"Enter "<<i<<" : ";
        cin>>arr[i];
    }
    printArray(arr,size);
    
   
}

int main() {

    int size;
    int key;
    int arr[size];
    
    cout<<"Enter array size : ";
    cin>>size;
    
    inputArray(arr,size);

    return 0;
}
