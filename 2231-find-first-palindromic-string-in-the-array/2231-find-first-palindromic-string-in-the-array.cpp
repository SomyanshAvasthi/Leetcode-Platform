class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s;

        for(int i=0;i<words.size();i++){
            int f=0;
            for(int j=0,k=words[i].size()-1;j<=k;j++,k--){
                // string s; 
                if(words[i][j]!=words[i][k]){
                    f=1;
                    break;
                }   
            }
            if(f==0){
                return words[i];
            }
        }  
        return "";      
    }
    // return " ";
};