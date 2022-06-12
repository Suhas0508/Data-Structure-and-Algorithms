#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout<<arr[i]<<",";
	}
	
}
 
int main()
{
    int arr[] = { 1, 0, 0, 1, 0, 1, 0, 0, 1, 1 };
   	sort(arr,10);
}
