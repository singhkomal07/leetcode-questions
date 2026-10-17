
/*DATE:13.09.26
PROBLEM LINK:https://www.geeksforgeeks.org/problems/count-total-digits-in-a-number/1
PROBLEM STATEMENT:Count the total number of digits in a given number.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves repeatedly dividing the number by 10 until it becomes 0, counting the iterations.
*/
class Solution {
public:
    int countDigits(int n) {
        int count = 0;

        while (n > 0) {
            count++;
            n = n / 10;
        }

        return count;
    }
};