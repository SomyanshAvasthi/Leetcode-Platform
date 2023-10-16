class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int e=nums.size()-1;
        for(int i=0;i<=e;){
            if((nums[i]&1)==1){
                swap(nums[i],nums[e]);
                e--;
            }
            else{
                i++;
            }
        }
        return nums;
    }
};