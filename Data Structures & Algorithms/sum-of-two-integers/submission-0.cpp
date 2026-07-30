class Solution {
public:
    int getSum(int a, int b) {
        int sum = a ^ b, carry = a & b;
        int tempsum = 0, tempcarry = 0;
        carry*=2;
        while(carry != 0){
            tempsum = (sum ^ carry);
            tempcarry = sum & carry;

            sum = tempsum; carry = tempcarry*2;
        }

        return sum;
    }
};
