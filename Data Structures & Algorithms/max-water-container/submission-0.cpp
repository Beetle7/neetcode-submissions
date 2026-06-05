class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start=0; int end=heights.size()-1;
        int max=0;
        while(start<end){
            int current=(end-start)*min(heights[start], heights[end]);
            if (current>max) max=current;
            if (heights[start]<heights[end]) start++;
            else if (heights[start]>heights[end]) end--;
            else {
                start++;
                end--;
            }
        }
        return max;
    }
};
