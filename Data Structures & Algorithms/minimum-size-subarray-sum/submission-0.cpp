class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int current=0;
        int mindow=100002;
        for(int end=0;end<nums.size();end++){
            current+=nums[end];
            while(current>=target){
                if (mindow>end-start+1) mindow=end-start+1;
                current-=nums[start];
                start++;
            }
        }
        if (mindow==100002) return 0;
        return mindow;
    }
};