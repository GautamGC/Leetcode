class Solution {
    public boolean isPalindrome(int x) {
        int n=x;
        int rev=0;
        if(x<0){
            return false;
        }
        else{
            while(n>0){
                int r=n%10;
                rev=rev*10+r;
                n=n/10;
            }
            if(rev == x){
                return true;
            }
            else{
                return false;
            }
        }
    }
}