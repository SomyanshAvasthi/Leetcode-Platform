class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        
        int s=0,e=numbers.size()-1;
        while(s<e){
            
            if(numbers[s]+numbers[e]==target){
                ans.push_back(s+1);
                ans.push_back(e+1);
// adding 1 in both the e and s because here we want to display output starting from 1 for the very first element.
                break;
// using 'break' because the loop will never fulfil the condition if break will be avoided and will lead to an infinite loop.                
            }
            
            else if(numbers[s]+numbers[e]<target){
                s++;
            }
            
            else if(numbers[s]+numbers[e]>target){
                e--;
            }
        }
        
        return ans;
    }
};