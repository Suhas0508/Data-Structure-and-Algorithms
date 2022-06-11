// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void swapAlternative(int arr[], int n){

    cout<<"Reverse Array : { ";
	int end=1;
	int start=0;
    for(int i=0; i<n; i++){
		
		if(end!=n){
			int temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
			
			start+=2;
			end+=2;
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
    
    swapAlternative(arr,5);
	swapAlternative(arr1,7);
	swapAlternative(arr2,13);

    return 0;
}
