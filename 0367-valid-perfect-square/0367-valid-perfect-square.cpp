class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int s=0,e=num;
        bool ans=false;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            if(mid*mid>num){
                e=mid-1;
            }
            else if(mid*mid<num){
                s=mid+1;
            }
            else if(mid*mid==num){
                ans=true;
                return ans;
            }
        }
        return ans;
    }
};