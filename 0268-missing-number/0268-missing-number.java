class Solution {
    public int missingNumber(int[] nums) {
        int j= 0;
        int n=nums.length;
        int sum1=(n*(n+1))/2;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum2=sum2+nums[i];
        }
        sum1=sum1-sum2;
        return sum1;
    }
}