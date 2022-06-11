
#include <iostream>
using namespace std;

void reverseArray(int arr[]){

    cout<<"Reverse Array : { ";
    for(int i=4; i>=0; i--){
        cout<<arr[i]<<",";
    }    
	cout<<" }";
}

int main() {
    cout << "Revese Array program"<<endl;
    
    int arr[5]={1,2,3,4,5};
    
    reverseArray(arr);

    return 0;
}
