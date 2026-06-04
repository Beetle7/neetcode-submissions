class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        for (int i=0;i<n-1;i++){
            for (int j=0;j<n-i-1;j++){
                if (nums[j]>nums[j+1]){
                    int temp=nums[j+1];
                    nums[j+1]=nums[j];
                    nums[j]=temp;
                }
            }
        }
//sorted        
        vector<vector<int>> ans;
        for (int i=0;i<n-2;i++){
            if (i>0&&nums[i]==nums[i-1]) continue;
            int k=nums.size()-1;
            int j=i+1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j<k&&nums[j]==nums[j+1]) j++;
                    while (j<k&&nums[k]==nums[k-1]) k--;
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0) j++;
                else k--;
            }
        }
        return ans;
    }
};
