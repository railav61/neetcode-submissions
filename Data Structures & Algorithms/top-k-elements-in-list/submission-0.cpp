class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> kfrequent;
        unordered_map<int, int> mpp;
        for (auto x : nums) {
            mpp[x]++;
        }
        

        vector<pair<int,int>> vp(mpp.begin(),mpp.end());



        sort(vp.begin(),vp.end(),[](const auto& a, const auto& b) { return a.second > b.second; });
        vector<int> topk;
        topk.reserve(k);
        for(int i = 0;i<k;i++){
            topk.push_back(vp[i].first);
        }
            
        return topk;
    }
};
