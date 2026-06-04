class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
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
        for (int a=0;a<n-3;a++){
            if (a>0&&nums[a]==nums[a-1]) continue;
            for (int b=a+1;b<n-2;b++){
                if (b>a+1&&nums[b]==nums[b-1]) continue;
                int d=nums.size()-1;
                int c=b+1;
                while(c<d){
                    long long int sum=(long long)nums[a]+nums[b]+nums[c]+nums[d];
                    if(sum==target){
                        ans.push_back({nums[a], nums[b], nums[c], nums[d]});
                        while (c<d&&nums[c]==nums[c+1]) c++;
                        while (c<d&&nums[d]==nums[d-1]) d--;
                        c++;
                        d--;
                    }
                    else if (sum<target) c++;
                    else d--;
                }
            }
        }
        return ans;



    }
};