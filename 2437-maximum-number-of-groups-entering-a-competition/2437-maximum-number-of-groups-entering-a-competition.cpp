class Solution {
public:
    int maximumGroups(vector<int>& grades) {
    int total = 0, k = 0, n = grades.size();
    while(total <= n){
        total += ++k;
    }
    return k-1;
}
};