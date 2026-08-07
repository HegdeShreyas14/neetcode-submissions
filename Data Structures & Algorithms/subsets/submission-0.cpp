class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int> subset;
        setmake(nums , 0 , subset , sol);
        return sol;        
    }

    void setmake(vector<int>& nums , int n , vector<int>& subset , vector<vector<int>>& sol){
        if(n >= nums.size()){
            sol.push_back(subset);
            return;
        }

        subset.push_back(nums[n]);
        setmake(nums, n + 1, subset , sol);
        subset.pop_back();
        setmake(nums , n + 1, subset , sol);
    }
};
