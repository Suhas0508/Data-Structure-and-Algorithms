int binarySearch(int arr[], int s, int e, int key){
    int mid = s + (e-s)/2;
    
    while(s <= e){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;   
}

int getPivote(int arr[],int n){

    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return mid;   
}

int search(int* arr, int n, int key) {
    int pivote = getPivote(arr,n);
    if(key >= arr[pivote] && key <= arr[n-1]){
        return binarySearch(arr,pivote,n-1,key);
    }
    else{
        return binarySearch(arr,0,pivote-1,key);
    }
}
