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
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            nums[index]=-nums[index];
            if(nums[index]>0){
                return index;
            }
        }
        return -1;


        // for(;nums[0]!=nums[nums[0]];){
        //  here we swap the 0th element with the element present at the 0th index everytime
        // this happens till the 0th element and the element at 0th index is same to the 
        // element present nums[nums[0]]
            // swap(nums[0],nums[nums[0]]);
            // }

            // return nums[0];
        }
};