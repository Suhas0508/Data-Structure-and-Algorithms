class Solution {
    
    public boolean isPossible(int mid,int[] nums,int maxOperations){
        int n = nums.length;
        int numberOfOperationsReq = 0;
        
        for(int i=0;i<n;i++){
            if(nums[i]%mid==0){
                numberOfOperationsReq += (nums[i]/mid)-1;
            }else{
                numberOfOperationsReq += (nums[i]/mid);
            }
        }
        
        return (numberOfOperationsReq<=maxOperations);
    }
    public int minimumSize(int[] nums, int maxOperations) {
        
        int n = nums.length;
        int start = 1;
        int end = Integer.MIN_VALUE;
        
        for(int i=0;i<n;i++){
            end = Math.max(end,nums[i]);
        }
        
        int answer = end;
        
        while(start<=end){
            int mid = (start+end)/2;
            if(isPossible(mid,nums,maxOperations)){
                answer = Math.min(answer,mid);
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        
        return answer+1;
    }
}
