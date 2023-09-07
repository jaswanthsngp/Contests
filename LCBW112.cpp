// https://leetcode.com/contest/biweekly-contest-112

#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool canBeEqual(string s1, string s2) {
    // accepted in the contest
    // the second problem, but the size of string is 4
    // so obviously O(1) and O(1)
    return ((s1[0]==s2[0] && s1[2]==s2[2]) || (s1[0]==s2[2] && s1[2]==s2[0])) 
        && ((s1[1]==s2[1] && s1[3]==s2[3]) || (s1[3]==s2[1] && s1[1]==s2[3]));
}

bool checkStrings(string s1, string s2) {
    // accepted in the contest
    // time O(n), space O(1)

    // two strings of equal length are given, 
    // a char at even index can be moved to any other even index
    // a char at odd index can be moved to any other odd index
    // check if both string can be made equal
    
    int even[26]= {}, odd[26]= {};
    int n= s1.size();
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            even[s1[i]-'a']++;
            even[s2[i]-'a']--;
        } else {
            odd[s1[i]-'a']++;
            odd[s2[i]-'a']--;
        }
    }
    for(int i=0; i<26; i++)
        if(even[i]!=0 || odd[i]!=0)
            return false;
    return true;
}

int main() {
    cout<<canBeEqual("abcd","cdab")<<' '<<canBeEqual("abcd","dcab")<<endl;
    cout<<checkStrings("abcdba","cabdab")<<' '<<checkStrings("abe","bea")<<endl;
    return 0;
}