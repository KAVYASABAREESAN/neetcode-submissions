class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int n=nums.size();
        vector<int> pp(n);
        vector<int>sp(n);
        pp[0]=1;
        sp[n-1]=1;
        vector<int> res(n);
        for(int i=1;i<n;i++)
        {
            pp[i]=pp[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            sp[i]=sp[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            res[i]=pp[i]*sp[i];
        }
        return res;
    }

};
