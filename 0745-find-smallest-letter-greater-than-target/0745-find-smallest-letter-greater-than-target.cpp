class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        
        int s=0,e=letters.size()-1;
        char ans=letters[0];
// 1 - char ans for storing that every value of our ans which is greater than target.
        
        while(s<=e){
            int mid=s+(e-s)/2;
            char midi=letters[mid];
// 2 - char midi for storing the character of the array corosponding to the mid element of the array.
        
            if(midi>target){
                ans=midi;
                e=mid-1;
            }
// 3 - e = mid-1 instead of e=mid because here we have already checked whether mid>target or not. So e=mid do not make any sense.            
            else{
                s=mid+1;
            }
        }
// 4 - And now the loop continues.
        
        return ans;
// 5 - Finally , we return our answer. Hope you'll be satisfied!!
    }
    
};