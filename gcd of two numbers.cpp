/*DATE:19.09.26
PROBLEM LINK:https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
PROBLEM STATEMENT:Find the GCD of two numbers.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves using the Euclidean algorithm.
*/class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int remainder = a % b;
            a = b;
            b = remainder;
        }

        return a;
    }
};
