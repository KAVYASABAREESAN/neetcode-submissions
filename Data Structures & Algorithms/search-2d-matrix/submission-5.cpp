class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int n=matrix.size();
            int m=matrix[0].size();
            for(int i=0;i<n;i++)
            {
                if(matrix[i][0]<=target && matrix[i][m-1]>=target)
                {
                    // int l=i;
                    // int m=0;
                    // int n=i;
                    // int 0=3
                    int k=0;
                    int j=m-1;
                    while(k<=j)
                    {
                        
                        int mid=k+(j-k)/2;
                        if(matrix[i][mid]==target)
                        {
                            return true;
                        }
                        else if(matrix[i][mid]>target)
                        {
                            j=mid-1;
                        }
                        else
                        {
                            k=mid+1;
                        }
                    }
                }
            }
            return false;
    }
};
