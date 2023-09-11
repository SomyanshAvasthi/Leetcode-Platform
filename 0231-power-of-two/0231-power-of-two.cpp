class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=0,bit_count;
        if(n<0){
            return false;
        }
        for(;n!=0;n=n>>1){
            bit_count=n&1;
            if(bit_count==1){
                ans=ans+1;
                }
        }
        if(ans==1){
            return true;
        }
        else{
            return false;
        }
    }
};