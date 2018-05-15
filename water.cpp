class Solution {
public:
    int trap(vector<int>& height) {
        int level=0;
        int n=height.size();
        int res=0;
        int l=0;
        int r=n-1;
        
        while(l<r)
        {
            int lower=height[height[l]<height[r]?l++:r--];
            level=max(level,lower);
            res+=level-lower;
        }
        
        return res;
    }
};
