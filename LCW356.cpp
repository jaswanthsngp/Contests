// https://leetcode.com/contest/weekly-contest-356/

#include <bits/stdc++.h>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int cnt=0;
    for(int i: hours) {
        if(i>=target) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    vector<int> h;
    h.assign({0,1,2,3,4});
    cout<<numberOfEmployeesWhoMetTarget(h, 2)<<endl;
    h.assign({5,1,4,2,2});
    cout<<numberOfEmployeesWhoMetTarget(h, 6)<<endl;
    return 0;
}