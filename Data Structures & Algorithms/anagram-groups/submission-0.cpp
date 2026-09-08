class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> m;
        for(string s : strs)
        {
            string org=s;
            sort(s.begin(),s.end());
            string key=s;
            m[key].push_back(org);
            
        }
        for(auto val : m)
        {
            res.push_back(val.second);
        }
        return res;
    }
};
