// https://codeforces.com/contest/1862/problem/A

#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// Solved in the contest, but wasted a lot of time on this
// misread the question and came up with a <regex> solution, // regex_match(mat[i], regex(".*v.*i.*k.*a.*"))
// while the actual solution is simple search

bool foundTheName() {
    int n, m, k=0;
    string s, x="vika";
    vector<string> mat;
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        cin>>s;
        mat.push_back(s);
    }
    int i=0, j=0;
    while(i<m) {
        // cout<<"i loop"<<endl;
        j=0;
        while(j<n) {
            // cout<<"j loop"<<endl;
            if(mat[j][i]==x[k]) {
                // cout<<mat[j][i]<<endl;
                k++;
                j=n;
            }
            j++;
        }
        // cout<<k<<endl;
        if(k==4)
            return true;
        i++;
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        if(foundTheName())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
