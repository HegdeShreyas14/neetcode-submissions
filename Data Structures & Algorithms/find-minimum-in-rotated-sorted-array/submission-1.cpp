class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0;
        while (i + 1 != nums.size() && nums[i] < nums[i+1]) {
            i++;
        }
        if (i + 1 == nums.size()) return nums[0];
        return nums[i + 1];
    }
};