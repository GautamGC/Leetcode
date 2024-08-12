class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int j=0;
        int k=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                k++;
            }
            else{
                if(j<k){
                    j=k;
                }
                k=0;
            }
        }
        if(k>j){
            j=k;
        }
        return j;
    }
}