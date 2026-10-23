class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int maxarea=0;
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int h=min(heights[i],heights[j]);
            int b=j-i;
            int area=h*b;
            maxarea=max(area,maxarea);
            if(heights[i]>heights[j])
            {
                j--;
            }
            else if(heights[i]==heights[j])
            {
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
     return maxarea;   

    }
};
