// https://leetcode.com/problems/check-if-it-is-possible-to-split-array

// Passed in Contest

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool canSplitArray(vector<int> nums, int m) {
        int n= nums.size();
        if(n==1 || n==2)
            return true;
        for(int i=0; i<n-1; i++) {
            if((nums[i]+nums[i+1])>=m)
                return true;
        }
        return false;
    }
};

int main () {
    Solution sol;
    cout<<sol.canSplitArray({2, 2, 1}, 4)<<endl;
    cout<<sol.canSplitArray({2, 1, 3}, 5)<<endl;
    cout<<sol.canSplitArray({2, 3, 3, 2, 3}, 6)<<endl;
    cout<<sol.canSplitArray({2, 2}, 5)<<endl;
    cout<<sol.canSplitArray({1}, 5)<<endl;
    return 0;
}
