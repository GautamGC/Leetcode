class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        int c=0;
        int t=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]==t){
                c++;
            }
            else if(nums[i] != t && c==0){
                t=nums[i];
                c++;
            }
            else{
                c--;
            }
        }
        return t;
    }
}