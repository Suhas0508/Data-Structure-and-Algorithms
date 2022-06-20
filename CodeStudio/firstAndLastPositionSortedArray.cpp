int leftOcc(vector<int>& arr, int n, int key)
{
   
   int start=0, end=n-1, mid=0, ans=-1;
   mid = start+(end-start)/2;
   while(start<=end){
       
       if(arr[mid] == key){
           ans = mid;
           end = mid-1;
       }
       if(key > arr[mid]){
           start = mid+1;
       }
       if(key < arr[mid]){
           end = mid-1;
       }
       mid = start+(end-start)/2;
   }
   return ans;  
}

int rightOcc(vector<int>& arr, int n, int key)
{
   
   int start=0, end=n-1, mid=0, ans=-1;
   mid = start+(end-start)/2;
   while(start<=end){
       
       if(arr[mid] == key){
           ans = mid;
           start = mid+1;
       }
       if(key > arr[mid]){
           start = mid+1;
       }
       if(key < arr[mid]){
           end = mid-1;
       }
       mid = start+(end-start)/2;
   }
   return ans;  
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    
    pair<int,int> p;
    
    p.first = leftOcc(arr, n, k);
    p.second = rightOcc(arr, n, k);
    
    return p;
}
