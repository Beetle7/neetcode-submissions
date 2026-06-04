class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for (int i=0;i<strs[0].length();i++){
            char curr=strs[0][i];
            for (int j=0;j<strs.size();j++){
                if (i>=strs[j].length()||strs[j][i]!=curr) return ans;
            }
            ans+=curr;
        }
        return ans;
    }
};