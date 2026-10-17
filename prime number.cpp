/*DATE:13.09.26
PROBLEM LINK:https://www.geeksforgeeks.org/problems/prime-number2314/1
PROBLEM STATEMENT:Check if a given number is prime.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves checking for divisibility up to the square root of the number.
*/
class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }
};