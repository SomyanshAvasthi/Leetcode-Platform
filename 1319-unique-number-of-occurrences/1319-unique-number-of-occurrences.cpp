class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int count = 1;
        vector<int> ans;
        for (int i = 0; i < arr.size(); i=i+count) {
            count=1;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] == arr[j]) {
                    count++;
                } else {
                    break;
                }
            }
            ans.push_back(count);    
        }
        sort(ans.begin(),ans.end());
        for (int i = 0; i < ans.size() - 1; i++) {
            if (ans[i] == ans[i + 1]) {
                return false;
            }
            
        
        }
        return true;
    }
};
