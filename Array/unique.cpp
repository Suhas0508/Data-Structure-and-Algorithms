
#include <iostream>
using namespace std;

int uniqueEle(int array[], int n){
   int i,j;
   int count = 1;
   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(array[i] == array[j] && i != j)
         break;
      }
      if(j == n ){
         printf("\nunique elements in an array is [%d] : %d \n",count,array[i]);
         ++count;
      }
   }
   return -1;
}

int main() {
    cout << "Revese Array program"<<endl;
    
    int array[5]={5,2,2,4,5};
	int array1[7]={5,2,7,6,8,9,4};
	
    
	uniqueEle(array,5);
	uniqueEle(array1,7);

    return 0;
}
