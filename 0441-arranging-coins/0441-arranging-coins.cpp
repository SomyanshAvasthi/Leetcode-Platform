class Solution {
public:
    int arrangeCoins(int n) {
        int s=1,e=n,ans=0;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            if(mid*(mid+1)/2<=n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};