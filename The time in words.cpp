
/*DATE:08.10.26
PROBLEM LINK:https://www.hackerrank.com/challenges/the-time-in-words/problem
PROBLEM STATEMENT:Given the time in numerals we may convert it into words, as shown below:

At minutes=0, use o' clock. For 1<=m<=30, use past, and for 30<m<60, use to. Note the space between the apostrophe and clock in o' clock. Write a program which prints the time in words for the input given in the format described.
INSIGHTS GAIN FROM THIS QUESTION: nextHour = h%12 +1; is used to get the next hour in 12 hour format.
*/

#include <bits/stdc++.h>

using namespace std; 

string timeInWords(int h, int m) {
    vector<string> num={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninetine","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
    if (m==0){
        return num[h]+" o' clock";}
    if (m==15){
        return "quarter past " + num[h];}
    if (m==30){
        return "half past " + num[h];}
    if(m==45){
        int nextHour = h%12 +1;
        return "quarter to " + num[nextHour];    }
    if(m<30){
        if(m==1)
            return num[m]+" minute past "+num[h];
        else
            return num[m]+" minutes past "+num[h];
        
    }     
    int remaining =60-m;
    int nextHour = h%12+1;
        if(remaining==1)
           return num[remaining] + " minute to " +num[nextHour];
        else 
           return num[remaining] + " minutes to " +num[nextHour];  
}