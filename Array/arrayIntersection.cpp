
#include <iostream>
using namespace std;

void intersectinArray(int arr[],int n,int arr1[] ,int n1){

    cout<<"{ ";
	
    for(int i=0; i<n; i++){
		for(int j=0; j<n1; j++){
			if(arr[i]==arr1[j]){
				cout<<arr[i]<<",";
			}
		}
		
	}
		
    
	   
	cout<<" }"<<endl;
}

int main() {
    cout << "Revese Array program"<<endl;
    
    int arr[5]={1,2,3,4,5};
	int arr1[7]={5,2,7,6,8,9,4};
	
    
	intersectinArray(arr,5,arr1,7);

    return 0;
}
