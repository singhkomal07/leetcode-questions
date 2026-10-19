/*DATE:21.09.26
PROBLEM LINK:https://www.hackerrank.com/challenges/find-digits/problem
PROBLEM STATEMENT:Find the number of digits in a number that divide the number.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves iterating through each digit of the number and checking if it divides the number evenly.
*/
#include <iostream>

using namespace std;

int findDigits(int num) {
    int temp = num;
    int count = 0;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 0 && num % digit == 0) {
            count++;
        }
        temp /= 10;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << findDigits(n) << "\n";
    }
    return 0;
}
