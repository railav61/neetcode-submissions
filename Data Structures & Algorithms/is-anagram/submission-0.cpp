class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;

        for(int i = 0; i<s.size();i++){
            smap[s[i]]++;
        }
        for(int i = 0; i<s.size();i++){
            tmap[t[i]]++;
        }

        for(int i = 0;i<s.size();i++){
            if(smap[s[i]] == tmap[s[i]]) continue;
            else return false;
        }
        return true;
    }
};
