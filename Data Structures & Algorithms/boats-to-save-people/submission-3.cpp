class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
//sorted
        int start=0; int end=people.size()-1; int boats=0;
        while(start<end){
            if(people[start]+people[end]<=limit){
                start++;
                end--;
                boats++;
            }
            else {
                end--;
                boats++;
            }
            if(start==end){
                boats++;
                break;
            }
        }
        return boats;
    }
};