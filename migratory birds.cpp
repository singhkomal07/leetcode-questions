
/*DATE:17.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/migratory-birds/problem
PROBLEM STATEMENT:Find the most frequently occurring bird type in an array.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves counting the occurrences of each bird type and finding the one with the highest count.
*/#include<bits/stdc++.h>
#include<vector>
using namespace std;
using namespace std;
int migratoryBirds(vector<int> arr) {
    vector<int> count(6,0);
    for(int bird:arr){
        count[bird]++;
    }
    int maxcount=0;
    int result=1;
    for(int i=1;i<=5;i++){
        if(count[i]>maxcount){
            maxcount=count[i];
            result=i;
        }
    }
    return result;
}
