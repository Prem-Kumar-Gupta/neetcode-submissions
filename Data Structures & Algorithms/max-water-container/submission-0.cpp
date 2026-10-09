class Solution {
public:
    int maxArea(vector<int>& heights) {
        int p=0;
        int q=heights.size()-1;
        int maxWater=0;
        while(p<q){ 
            int h=min(heights[p],heights[q]);
            int w=q-p;
            maxWater=max(h*w,maxWater);
            if(heights[p]<heights[q]){
                p++;
            }else{
                q--;
            }

        }
        return maxWater;
    }
};
