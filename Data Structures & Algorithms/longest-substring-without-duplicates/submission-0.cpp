class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars;
        int l = 0, best =  0;

        for(int r = 0; r < s.size() ; r ++){
            while(chars.find(s[r]) != chars.end()){
                chars.erase(s[l]);
                l++;
            }
            chars.insert(s[r]);
            best = max( best , r - l + 1);
        }
        return best;
    }
};
