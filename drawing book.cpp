/*DATE:12.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/drawing-book/problem
PROBLEM STATEMENT:Given the number of pages in a book and a page number, find the minimum number of pages to turn to reach the given page.

INSIGHTS GAIN FROM THIS QUESTION: The problem can be solved by calculating the number of pages to turn from the front and the back, and returning the minimum of the two.
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std; 
int pageCount(int n, int p) {
    int front=p/2;
    int back=n/2-p/2;
    return min(front,back);
}

