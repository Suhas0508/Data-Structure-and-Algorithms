#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<",";
	}
}

void sort(int arr[], int n){
	//-------------------------------------------------------------------
	// for(int i=0; i<n; i++){
	// 	for(int j=i+1; j<n; j++){
	// 		if(arr[i]>arr[j]){
	// 			int temp = arr[i];
	// 			arr[i] = arr[j];
	// 			arr[j] = temp;
	// 		}
	// 	}
	// 	cout<<arr[i]<<",";
	// }
	
	//-------------------------------------------------------------------
	
	//Using Optimal solution (BEST SOLUTION)
	
	int i=0, j=n-1;
	while(i<j){
		
		while(arr[i] == 0 && i<j)
			i++;
		
		while(arr[j] == 1 && i<j)
			j--;
		
		if(arr[i]==1 && arr[j] == 0 && i<j){
		
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}	
	}
}
 
int main()
{
    int arr[] = { 1, 0, 0, 1, 0, 1, 0, 0, 1, 1 };
   	sort(arr,10);
	printArray(arr,10);
}
