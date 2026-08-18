class Solution {
public:
    int jump(vector<int>& nums) {
        int steps = 0;
        int maxreach = 0 , curr = 0;

        for(int i =0;i < nums.size() - 1;i ++){
            maxreach = max(nums[i] + i , maxreach);

            if(curr == i){
                steps++;
                curr = maxreach;
            }
        }
        return steps;
    }
};