// https://leetcode.com/contest/weekly-contest-356/problems/number-of-employees-who-met-the-target/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt=0;
        for(int i: hours) {
            if(i>=target) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution* sol= new Solution();
    vector<int> h;
    h.assign({0,1,2,3,4});
    cout<<sol->numberOfEmployeesWhoMetTarget(h, 2)<<endl;
    h.assign({5,1,4,2,2});
    cout<<sol->numberOfEmployeesWhoMetTarget(h, 6)<<endl;
    return 0;
}