class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j=0;
        for(int k=0;k<piles.size();k++)
        {
            j=max(j,piles[k]);
        }
        
        while(i<j)
        {
            int m=i+(j-i)/2;
            int rate=0;
            for(int k=0;k<piles.size();k++)
            {
                rate+=ceil((double)piles[k]/m);
                     
            }
            if(rate<=h)
            {
                j=m;
            }
            else if(rate>h)
            {
                i=m+1;
            }
        }
        return i;
    }
};
