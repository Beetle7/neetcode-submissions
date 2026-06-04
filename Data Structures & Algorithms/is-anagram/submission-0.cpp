class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<int> s_count(26, 0);
        vector<int> t_count(26, 0);
        for (int i=0;i<n;i++)
            s_count[s[i]-'a']++;
        for (int i=0;i<m;i++)
            t_count[t[i]-'a']++;
        for (int i=0;i<26;i++)
            if (s_count[i]!=t_count[i]) return false;
        return true;
    }
};
