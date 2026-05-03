class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        long a = labs(dividend);
        long b = labs(divisor);
        long ans = 0;

        while (a >= b) {
            long temp = b;
            long count = 1;

            while (a >= (temp << 1)) {
                temp <<= 1;
                count <<= 1;
            }

            a -= temp;
            ans += count;
        }

        
        if ((dividend < 0) ^ (divisor < 0)) {
            ans = -ans;
        }

        return (int)ans;
    }
};