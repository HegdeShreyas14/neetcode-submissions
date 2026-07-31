class Solution {
public:

    int checkhours(int mid , vector<int>& piles){
        int hours = 0;
        for(int i =0;i < piles.size() ;i ++){
            hours += (piles[i] + mid - 1)/mid;
        }
        return hours;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans  = 0;
        int maxi = piles[0] , mini = piles[0];
        for(int i = 1;i < piles.size() ; i ++){
            if(piles[i] > maxi) maxi = piles[i];
        }
        int l = 1, r = maxi;
        int mid = 0;
        while(l < r){
            mid = l + (r - l)/2;
            if(checkhours(mid , piles) > h){
                l = mid + 1;
            }
            else r = mid ;
        }
        return l;
    }
};