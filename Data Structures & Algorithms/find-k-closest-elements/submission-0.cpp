class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i=0;
        while(x>=arr[i]&&i<arr.size()) i++;
        vector<int> ans;
        int start=i-1;
        int end=i;
        while(k){
            if(start<0){
                ans.push_back(arr[end]);
                k--;
                end++;
                continue;
            }
            if(end>=arr.size()){
                ans.push_back(arr[start]);
                k--;
                start--;
                continue;
            }
            if(abs(arr[start]-x)<=abs(arr[end]-x)){
                ans.push_back(arr[start]);
                start--;
                k--;
                continue;
            }
            if(abs(arr[start]-x)>abs(arr[end]-x)){
                ans.push_back(arr[end]);
                end++;
                k--;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};