class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m(0);
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(pair<int,int> num : m)
        {
            pq.push({num.second,num.first});
        }
        while(!pq.empty() && res.size()<k)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
