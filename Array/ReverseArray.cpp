
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){

    cout<<"Reverse Array : { ";
	int end=n-1;
	int start=0;
    for(int i=0; i<n; i++){
		
		if(start<=end){
			int temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
			
			start++;
			end--;
		}
		
		cout<<arr[i]<<",";
    }    
	cout<<" }"<<endl;
}

int main() {
    cout << "Revese Array program"<<endl;
    
    int arr[5]={1,2,3,4,5};
	int arr1[7]={5,2,7,6,5,9,4};
	
	int arr2[13]={5,2,7,6,3,6,8,9,0,6,5,9,4};
    
    reverseArray(arr,5);
	reverseArray(arr1,7);
	reverseArray(arr2,13);

    return 0;
}
