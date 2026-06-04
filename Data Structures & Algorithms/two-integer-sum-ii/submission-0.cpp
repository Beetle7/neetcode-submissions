class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1=0;
        int p2=numbers.size()-1;
        while(numbers[p1]+numbers[p2]!=target){
            if (numbers[p1]+numbers[p2]>target) p2--;
            else if (numbers[p1]+numbers[p2]<target) p1++;
        }
        vector<int> answer={p1+1, p2+1};
        return answer;
    }
};
