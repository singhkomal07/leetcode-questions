/*DATE:10.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/encryption/problem
PROBLEM STATEMENT:An English text needs to be encrypted using the following encryption scheme.
First, the spaces are removed from the text. Let L be the length of this text.
Then, characters are written into a grid, whose rows and columns have the following constraints:
INSIGHTS GAIN FROM THIS QUESTION:ceil(sqrt(L)) >= floor(sqrt(L)) and rows * columns >= L
*/

#include <bits/stdc++.h>

using namespace std;

string encryption(string s) {
string str ="";
for(char ch:s){
    if(ch!=' '){
        str+=ch;
    }
}
int n=str.length();
int rows = floor(sqrt(n));
int cols=ceil(sqrt(n));
if(rows*cols<n){
    rows++;
}
string result="";
for(int col =0;col<cols;col++){
    for(int i =col;i<n;i+=cols){
        result+=str[i];}
        result+=" ";
}
if(result.empty()){
    result.pop_back();
}
return result;
}