class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;  

        long long exp = n; 

        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }

        if (exp % 2 == 0) {
            return myPow(x * x, exp / 2);
        }
        return x * myPow(x * x, (exp - 1) / 2);  
    }
};
