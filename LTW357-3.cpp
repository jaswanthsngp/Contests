// https://leetcode.com/problems/find-the-safest-path-in-a-grid/

// Failed in the contest

#include <iostream>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
    vector<vector<int>> thieves;
    int safety(int i, int j, int minSafety) {
        int s;
        for(vector<int> a: thieves) {
            s= abs(i-a[0])+abs(j-a[1]);
            if(s<minSafety)
                    minSafety= s;
        }
        return minSafety;
    }
public:
    int maximumSafenessFactor(vector<vector<int>> grid) {
        int n= grid.size(), minSafety;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(grid[i][j]==1)
                    thieves.push_back({i, j});
        // for(vector<int> a: thieves)
        //         cout<<a[0]<<' '<<a[1]<<endl;
        minSafety= min(safety(0, 0, 2*n), safety(0, 0, 2*n));
        int i=0, j=0;
        while(i!=n-1 || j!=n-1) {
            // cout<<i<<' '<<j<<' '<<minSafety<<endl;
            if(minSafety==0)
                return 0;
            if(i==n-1) {
                j++;
                if(minSafety>safety(i, j, 2*n))
                    minSafety= safety(i, j, 2*n);
            } else if(j==n-1) {
                i++;
                if(minSafety>safety(i, j, 2*n))
                    minSafety= safety(i, j, 2*n);
            } else if(safety(i+1, j, 2*n)>safety(i, j+1, 2*n)) {
                i++;
                if(minSafety>safety(i, j, 2*n))
                    minSafety= safety(i, j, 2*n);
            } else {
                j++;
                if(minSafety>safety(i, j, 2*n))
                    minSafety= safety(i, j, 2*n);
            }
        }
        return minSafety;
    }
};

int main() {
    Solution sol;
    cout<<sol.maximumSafenessFactor({{0,0,1}, {0,0,0}, {1,0,0}})<<endl;
    return 0;
}
