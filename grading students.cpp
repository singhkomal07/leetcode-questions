
/*DATE:16.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/grading/problem
PROBLEM STATEMENT:Grade students based on their scores.
INSIGHTS GAIN FROM THIS QUESTION: The approach involves rounding grades according to specific rules.
*/
#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);
vector<int> gradingStudents(vector<int> grades) {
    for(int i =0; i< grades.size();i++){
        if(grades[i]>=38){
            int next =((grades[i]/5)+1)*5;
            if (next - grades[i]<3){
                grades[i]=next;
                
            }
        }
    }
    return grades;
}