class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> sol;
        int shreyas  = n;
        for(int i = 0;i <= shreyas; i ++){
            int ans  = 0;
            int  lol =i;
            while( lol > 0){
                if(lol %2 == 1) ans ++;
                lol /= 2;
            }
            sol.push_back(ans);
        }
        return sol;
    }
};

