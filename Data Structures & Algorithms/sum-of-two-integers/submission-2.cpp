class Solution {
public:
    int getSum(int a, int b) {
        int sum = a ^ b, carry = a & b;
        int tempsum = 0;
        carry*=2;
        while(carry != 0){
            tempsum = (sum ^ carry);
            carry = (sum & carry)*2;

            sum = tempsum;
        }

        return sum;
    }
};
