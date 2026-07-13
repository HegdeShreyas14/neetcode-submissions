class Solution {
public:
    int maxArea(vector<int>& heights) {
        int vol = 0 , maxvol = 0;
        int l = 0 , r = heights.size() - 1;
        maxvol = min(heights[l] , heights[r]) * r;

      while(l < r){
        vol = min(heights[l] , heights[r]) * (r- l);
        maxvol = max(maxvol , vol);
        if(heights[l] <= heights[r]){
            l ++;
        }else{
            r -- ;
        } 
      }
      return maxvol;
    }
};
