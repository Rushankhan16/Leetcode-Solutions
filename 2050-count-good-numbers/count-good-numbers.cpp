class Solution {
public:
    long long MOD=1000000007;
    long long power(long long x, long long n){
        
        if(n==0){
            return 1;
        }
        if(n%2==0){
            long long half=power(x,n/2);
            return (half*half) % MOD;
        }
        return (x*power(x,n-1)) % MOD;
    }
    long long countGoodNumbers(long long n) {
        long long evenPosn=(n+1)/2;
        long long oddPosn=(n/2);

        long long ans=power(5,evenPosn)*power(4,oddPosn);

        return ans % MOD;
    }
};