class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin() , nums.end());

        int best  = 0;
        for(int i = 0 ; i < nums.size() ; i ++){
           
           if(! s.count(nums[i] - 1)){
            int maxlen = 1;
            while(s.count(nums[i]+maxlen)) maxlen++;
            best = max(best , maxlen);
           }
        }   
        return best;        
    }
};
