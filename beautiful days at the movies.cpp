/*DATE:15.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
PROBLEM STATEMENT:Lily likes to play games with integers. She has created a new game where she determines the difference between a number and its reverse. For instance, given the number 12 , its reverse is 21 . Their difference is 9. The number 120  reversed is21 , and their difference is 99 .

She decides to apply her game to decision making. She will look at a numbered range of days and will only go to a movie on a beautiful day.

Given a range of numbered days,  and a number , determine the number of days in the range that are beautiful. Beautiful numbers are defined as numbers where  is evenly divisible by . If a day's value is a beautiful number, it is a beautiful day. Return the number of beautiful days in the range.

INSIGHTS GAIN FROM THIS QUESTION: use abs,Time complexity: O(j-i+1)times d), where d is the maximum number of digits in a day.
Auxiliary space:O(1)
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std; 
int beautifulDays(int i, int j, int k) {
int count=0;
for(int day =i;day<=j;day++){
    int num=day;
    int rev=0;
    while(num>0){
        int digit=num%10;
        rev = rev*10+digit;
        num/=10;
    }
    if(abs(day-rev)%k==0){
        count++;
    }
}
return count;
}
