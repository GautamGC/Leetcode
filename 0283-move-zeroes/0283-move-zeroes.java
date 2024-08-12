class Solution {
    public void moveZeroes(int[] nums) {
        int n=nums.length;
        int j=0;
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
            else{
                k++;
            }
        }
        for(int i=j;i<j+k;i++){
            nums[i]=0;
        }
    }
}