class Solution {
public:
    int pivotELEMENT(vector<int>& nums,int size){
        int s=0,e=size;
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            
            else{
                e=mid;
            }
        }
        return s;
    }
    
    int binarySEARCH(vector<int>& nums, int target,int s,int e){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(target>nums[mid]){
                s=mid+1;
            }
            else if(target==nums[mid]){
                return mid;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
        
    }
    
    int search(vector<int>& nums, int target) {
        int size= nums.size(), pivot=pivotELEMENT(nums,size);
            
        if(target>=nums[0] && target<=nums[pivot-1]){
            return binarySEARCH(nums,target,0,pivot-1);
            }
        else {
            return binarySEARCH(nums,target,pivot,size-1);
        }
    }
};