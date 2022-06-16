void reverseArray(vector<int> &arr , int m)
{
    
    int size = arr.size()-1;
    int temp = 0;
    
    while(m<size){
    
        temp = arr[m+1];
        arr[m+1] = arr[size];
        arr[size] = temp;
        m++;
        size--;
        
    }
}
