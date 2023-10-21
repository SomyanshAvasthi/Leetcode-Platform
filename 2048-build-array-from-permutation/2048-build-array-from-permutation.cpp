class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
            for(int j=0;j<nums.size();j++){
                ans.push_back(nums[nums[j]]);
            }
        return ans;
        }
    
};