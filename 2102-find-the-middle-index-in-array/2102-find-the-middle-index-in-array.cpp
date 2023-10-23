class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int l=0,r=0,size=nums.size();
        for(int i=0;i<size;i++){
            r+=nums[i];
        }
        for(int i=0;i<size;i++){
            r-=nums[i];
            if(l==r){
                return i;
            }
            l+=nums[i];
        }
        return -1;
    }
};