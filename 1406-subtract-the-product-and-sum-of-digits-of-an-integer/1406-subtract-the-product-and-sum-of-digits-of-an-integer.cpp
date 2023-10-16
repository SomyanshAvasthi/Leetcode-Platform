class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;
        for(;n!=0;n=n/10){
            int modu=n%10;
            
            prod=prod*modu;
            sum=sum+modu;
            
        }
        int ans=prod-sum;
        return ans;
        
    }
};