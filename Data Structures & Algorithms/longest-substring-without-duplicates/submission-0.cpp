class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastknown;
        int window=0;
        int start=0;
        for(int end=0;end<s.length();end++){
            char current=s[end];
            if(lastknown.find(current)!=lastknown.end())
                start=max(start, lastknown[current]+1);
            lastknown[current]=end;
            window=max(window, end-start+1);
        }
        return window;
    }
};
