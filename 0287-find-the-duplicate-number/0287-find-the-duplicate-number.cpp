class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             return nums[i];
        //         }
        //     }
        // }
        // return -1;
        for(;nums[0]!=nums[nums[0]];){
            swap(nums[0],nums[nums[0]]);

            }
            return nums[0];
        }
    
};