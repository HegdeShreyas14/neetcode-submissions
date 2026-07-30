class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int x,out=0,i=32;
        while(i!=0){
            x=n%2;
            out=2*out+x;
            n/=2;
            i--; 
        }
        return out;
    }
};