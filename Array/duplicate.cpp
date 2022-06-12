
#include <iostream>
using namespace std;

int duplicateEle(int array[], int n){
   int i,j;
   int count = 1;
   for(i = 0; i < n; i++){
      for(j = i+1; j < n; j++){
         if(array[i] == array[j])
         cout<<array[j]<<",";
		
      }
     
   }
   return -1;
}

int main() {
    
    int array[5]={5,2,2,5,6};
	int array1[7]={5,4,7,9,8,9,4};
	
    
	duplicateEle(array,5);
	duplicateEle(array1,7);

    return 0;
}
