// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void checkPair(int arr[], int n, int num){
  
  cout<<"Pair Number is : "<<endl;
   
  for(int i=0; i<n; i++){
	  for(int j=i+1; j<n-1; j++){
		  if(arr[i]+arr[j]==num){
			  cout<<arr[i]<<","<<arr[j];
			  
		  }
	  }
  }
}

int main() {
    int num=5;
    int arr1[5]={6,2,2,5,3};
	int arr[7]={5,2,6,3,1,9,4};
	
	
    
	checkPair(arr,7,7);
	//checkPair(arr1,7,6);

    return 0;
}
