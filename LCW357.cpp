// https://leetcode.com/weekly-contest-357/

#include <bits/stdc++.h>
using namespace std;

string finalString(string s) {
    // question 1
    // passed in the contest
    string str= "";
    for(char i: s) {
        if(i=='i')
            reverse(str.begin(), str.end());
        else
            str+=i;
    }
    return str;
}

bool canSplitArray(vector<int> nums, int m) {
    // question 2
    // passed in the contest
    int n= nums.size();
    if(n==1 || n==2)
        return true;
    for(int i=0; i<n-1; i++) {
        if((nums[i]+nums[i+1])>=m)
            return true;
    }
    return false;
}

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

int maximumSafenessFactor(vector<vector<int>> grid) {
    // question 3
    // failed in the contest, this is from editorial
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

int main () {
    // question 1
    cout<<finalString("string")<<endl;
    cout<<finalString("poiinter")<<endl;
    cout<<endl;
    // question 2
    cout<<canSplitArray({2, 2, 1}, 4)<<endl;
    cout<<canSplitArray({2, 1, 3}, 5)<<endl;
    cout<<canSplitArray({2, 3, 3, 2, 3}, 6)<<endl;
    cout<<canSplitArray({2, 2}, 5)<<endl;
    cout<<canSplitArray({1}, 5)<<endl;
    cout<<endl;
    // question 3
    cout<<maximumSafenessFactor({{0,0,1}, {0,0,0}, {1,0,0}})<<endl;
    return 0;
}
