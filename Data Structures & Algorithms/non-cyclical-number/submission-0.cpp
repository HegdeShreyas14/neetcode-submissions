class Solution {
public:
    int sumsq(int  n){
        int sum = 0;
        while(n > 0){
            int dig = n % 10;
            dig = dig* dig;
            sum += dig;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> visited;
        while(visited.find(n) == visited.end()){
            visited.insert(n);
            n = sumsq(n);
            if(n == 1) return true;

        }
        return false;
    }
};
