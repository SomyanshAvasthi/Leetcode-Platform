#include <math.h>
class Solution {
public:
    int reverse(int x) {
        int ans=0,dig;
        for(;x!=0;x=x/10){
            if(ans>INT_MAX/10){
            return 0;
        }
        else if(ans<INT_MIN/10){
            return 0;
        }
            dig=x%10;
            ans=dig+(ans*10);
        }
        
        return ans;
    }
};