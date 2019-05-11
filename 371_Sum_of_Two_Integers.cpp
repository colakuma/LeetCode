class Solution {
public:
    int getSum(int a, int b) {
        if(b == 0) {
            return a;
        }
        int a1 = a ^ b;
        int b1 = (a & b & 0x7fffffff) << 1;
        return getSum(a1, b1);
    }
};