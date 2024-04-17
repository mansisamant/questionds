//tle
// class Solution {
// public:

//     long long countGoodNumbers(long long n) {
//         //4 prime no.s betweeb 0 to 10 and 5 even numbers
//         long long num;
//         long long pow4 = 1;
//         long long pow5 = 1;

//         for (long long i = 0; i < n / 2; i++) {
//             pow4 = (pow4 * 4) % 1000000007;
//             pow5 = (pow5 * 5) % 1000000007;
//         }

//         if (n % 2 == 0) {
//             num = (pow4 * pow5) % 1000000007;
//         } else {
//             pow5 = (pow5 * 5) % 1000000007;
//             num = (pow5 * pow4) % 1000000007;
//         }

//         return num;
//     }
// };

class Solution {
public:
    long long fastPow(long long base, long long exponent, long long mod) {
        long long result = 1;
        base %= mod;
        //fast pow implementation
        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exponent /= 2;
        }
        return result;
    }

    long long countGoodNumbers(long long n) {
        // 4 prime numbers between 0 to 10 and 5 even numbers
        long long mod = 1000000007;
        long long pow4 = fastPow(4, n / 2, mod);
        long long pow5 = fastPow(5, n / 2, mod);

        long long num;
        if (n % 2 == 0) {
            num = (pow4 * pow5) % mod;
        } else {
            pow5 = (pow5 * 5) % mod;
            num = (pow5 * pow4) % mod;
        }

        return num;
    }
};
