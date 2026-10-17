/*DATE:14.09.26
PROBLEM LINK:https://www.geeksforgeeks.org/problems/reverse-digit0316/1
PROBLEM STATEMENT:Reverse the digits of a given number.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves repeatedly extracting the last digit and building the reversed number.
*/
class Solution {
public:
    int reverseDigits(int n) {
        int rev = 0;

        while (n > 0) {
            int remainder = n % 10;
            rev = rev * 10 + remainder;
            n = n / 10;
        }

        return rev;
    }
};