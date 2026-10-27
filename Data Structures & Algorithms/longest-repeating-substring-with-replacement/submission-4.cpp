class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int n=s.size();
        int i=0;
        int j=0;
        int maxs=0;
        int maxfreq=0;
        while(j<n)
        {
            freq[s[j]]++;
            maxfreq=max(maxfreq,freq[s[j]]);
            int c=(j-i+1)-maxfreq;
            if(c<=k)
            {
                maxs=max(j-i+1,maxs);
            }
            else
            {
                freq[s[i]]--;
                i++;
            }
            j++;
        }
        return maxs;
    }
};
