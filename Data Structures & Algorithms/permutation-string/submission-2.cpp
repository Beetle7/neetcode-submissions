class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1comp;
        unordered_map<char, int> s2comp;
        if(s1.length()>s2.length()) return false;
        int window=s1.length();
        for(int i=0;i<s1.length();i++){
            char current=s1[i];
            s1comp[current]++;
            current=s2[i];
            s2comp[current]++;
        }
        if(s1comp==s2comp) return true;
        bool ans=false;
        for(int i=s1.length();i<s2.length();i++){
            char current=s2[i];
            s2comp[current]++;
            current=s2[i-s1.length()];
            s2comp[current]--;
            if(s2comp[current]==0) s2comp.erase(current);
            if(s1comp==s2comp) ans=true;
        }
        return ans;
    }
};
