class Solution {
    public int reverse(int x) {
        int n=Math.abs(x);
        int rev=0;
        while(n>0){
            int r=n%10;
            if (rev > (Integer.MAX_VALUE - r) / 10){
                return 0;
            }
            rev=(rev*10)+r;
            n=n/10;
        }
        if(x>0){
            return rev;
        }
        else{
            return -rev;
        }
    }
}