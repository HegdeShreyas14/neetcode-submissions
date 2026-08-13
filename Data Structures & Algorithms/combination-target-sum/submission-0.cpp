class Solution {
public:
    void findcombs(int idx , int target , vector<int>& candidates , vector<int>& curr , vector<vector<int>>& res){
        if(target == 0){
            res.push_back(curr);
            return;
        }
        if(idx == candidates.size() || target < 0){
            return;
        }
        if(candidates[idx] <= target){
            curr.push_back(candidates[idx]);
            findcombs(idx, target - candidates[idx] , candidates , curr , res);
            curr.pop_back();
        }
        findcombs(idx + 1, target , candidates , curr , res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> res;

        findcombs(0 ,target ,  candidates , curr , res);
        return res;
    }
};