class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int sum1=(n*(n+1))/2;
        for(int i=0;i<n;i++){
                 sum+=nums[i];        
        }
        return (sum1-sum);
    }
};