class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> grp;
        unordered_map<string,vector<string>> mpp;

        for(auto x : strs){
            string a = x;
            sort(a.begin(),a.end());

            mpp[a].push_back(x);

        }

        for(auto x : mpp){
            grp.push_back(x.second);
        }

        return grp;

    }
};
