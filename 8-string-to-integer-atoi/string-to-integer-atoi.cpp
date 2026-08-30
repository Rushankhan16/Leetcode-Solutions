class Solution {
public:

    int function(string& s, long long &ans, int ind, long long temp, int &sign) {

        // Base case
        if (ind >= s.size() || s[ind] < '0' || s[ind] > '9') {
            return sign * temp;
        }

        // Take current digit
        int digit = s[ind] - '0';

        temp = temp * 10 + digit;

        // Overflow
        if (sign * temp > INT_MAX)
            return INT_MAX;

        if (sign * temp < INT_MIN)
            return INT_MIN;

        // Recursive call
        return function(s, ans, ind + 1, temp, sign);
    }

    int myAtoi(string s) {

        int n = s.size();
        int i = 0;

        // Skip spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Sign
        int sign = 1;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        long long ans = 0;

        return function(s, ans, i, 0, sign);
    }
};