class Solution {
    public int findFinalValue(int[] nums, int original) {
        int i=0;
        for(;i<nums.length;)
        {
                System.out.println(i);
            if(nums[i]==original)
            {
                original*=2;
                i=0;
            }
            else
            {
                i++;
            }
        }
        return original;
    }
}