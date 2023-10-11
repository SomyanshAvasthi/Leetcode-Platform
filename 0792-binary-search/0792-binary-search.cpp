class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size(), start=0, end=size-1, mid=start + (end-start)/2;
        while(start<=end){
            if(target==nums[mid]){
                return mid;
            }
            if(target>nums[mid]){
                start=mid+1;
            }
            else{           //key<nums[mid]
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
        
    }
};