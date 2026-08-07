class Solution {
public:
    int trap(vector<int>& height) {
        int max_water = 0;
       int l = 0 , r = height.size() - 1 , maxl = 0, maxr = 0;

       while( l <= r){
        if(height[l] < height[r]){
            if(height[l] < maxl){
                max_water += maxl - height[l];

            }
            else{ 
                maxl = height[l];
                
            }   
            l++;         
        }
        else{
            if(height[r]  < maxr){
                max_water += maxr - height[r];
            }
            else{
                maxr = height[r];
                
            }
            r--;
        }

       }
       return max_water;
    }
};
