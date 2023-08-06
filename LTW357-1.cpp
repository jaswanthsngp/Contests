// https://leetcode.com/problems/faulty-keyboard

// Passed in Contest

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string finalString(string s) {
        string str= "";
        for(char i: s) {
            if(i=='i')
                reverse(str.begin(), str.end());
            else
                str+=i;
        }
        return str;
    }
};

int main () {
    Solution sol;
    cout<<sol.finalString("string")<<endl;
    cout<<sol.finalString("poiinter")<<endl;
    return 0;
}
