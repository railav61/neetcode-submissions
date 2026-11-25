class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> s;
        int idx1;
        int sub = 0;
        for(int i = 0; i< nums.size();i++){
            sub = target - nums[i];
            if(s.find(sub) != s.end()){
                idx1 = i;
                break;
            }
            else{
                s.insert(nums[i]);
            }
        }

        for(int i = 0; i<nums.size();i++){
            if(nums[i] == sub && idx1 != i){
                if(idx1>i) return {i,idx1};
                else return {i, idx1};
            }
        }

        return {};
    }
};
