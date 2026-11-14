class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int sm=nums[0];
        while(i<j)
        {
            int m=(i+j)/2;
            if(nums[m]>nums[j])
            {
                i=m+1;
            }
            else if(nums[m]<=nums[j])
            {
                j=m;
            }
        }
        return nums[i];
    }
};
