class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int total_sum=0,right_sum=0,left_sum=0;
        for(int i=0;i<nums.size();i++){
            total_sum+=nums[i];
            
        }
                    right_sum=total_sum;

        for(int i=0;i<nums.size();i++){
            right_sum=right_sum-nums[i];
            if(right_sum==left_sum){
                return i;
            }
            left_sum+=nums[i];


        }
        return -1;
        

    }
};