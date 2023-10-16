class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int e = nums.size() - 1;
        int i = 0;
        while (i <= e) {
            if ((nums[i] & 1) == 1) {
                swap(nums[i], nums[e]);
                e--;
            } else {
                i++;
            }
        }
        return nums; // You should return the sorted array.
    }
};
