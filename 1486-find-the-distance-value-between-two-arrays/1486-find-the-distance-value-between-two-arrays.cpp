class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());        
        int ans = 0;
        for(auto v:arr1){
            int L = 0, R = arr2.size() - 1;
            while(L <= R) {
                int M = L + (R-L)/2;
                if( v-d <= arr2[M] && arr2[M] <=v+d) break;
                if(arr2[M] > v+d)  R = M - 1; else L = M + 1;
            }
            ans+=(L>R);
        }
        return ans;
    }
};