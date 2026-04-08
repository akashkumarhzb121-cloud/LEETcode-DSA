class Solution {
public:
    bool isPrime(int n) {
        // 1 and numbers less than 1 are not prime
        if (n <= 1) return false;
        
        // Loop runs up to the square root of n (O(sqrt(n)) time complexity)
        for(int i = 2; i * i <= n; i++) {
            // If n is divisible by i, it is not prime
            if (n % i == 0) {
                return false; 
            }
        }
        
        // If no divisors are found, it is prime
        return true; 
    }
};