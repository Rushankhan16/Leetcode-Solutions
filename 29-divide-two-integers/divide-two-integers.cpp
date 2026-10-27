class Solution {
public:
    int divide(int dividend, int divisor) {

        if(dividend == divisor) return 1;

        bool sign = true;

        if(dividend >= 0 && divisor < 0) sign = false;
        if(dividend < 0 && divisor > 0) sign = false;

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long long quo = 0;

        while(n >= d) {

            int cnt = 0;

            while((d << (cnt + 1)) <= n) {
                cnt++;
            }

            quo += (1LL << cnt);
            n = n - (d << cnt);
        }

        if(quo >= (1LL << 31) && sign) {
            return INT_MAX;
        }

        if(quo >= (1LL << 31) && !sign) {
            return INT_MIN;
        }

        return sign ? (int)quo : (int)-quo;
    }
};