class Solution {
public:
    double myPow(double x, int n) {
        if (n < 0) {
            x = 1 / x;
            n = -static_cast<unsigned int>(n);
        }
        return pow(x, n);
    }

private:
    double pow(double x, unsigned int n) {
        if (n == 0) {
            return 1.0;
        }

        double half = pow(x, n / 2);
        if (n & 1) {
            return x * half * half;
        } else {
            return half * half;
        }
    }
};
