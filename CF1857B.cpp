// https://codeforces.com/contest/1857/B

// return the maximum possible value of a given number after rounding off to any number of places
// solved in the contest

#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool solve(string& s) {
    int n= s.size(); bool found= false;
    for(int i=0; i<n; i++) {
        if(!found) {
            if(s[i]>'4') {
                found= true;
                if(i==0) {
                    s= "1"+s;
                    n++;
                } else
                    s[--i]++;
            }
        } else {
            s[i]= '0';
        }
    }
    // cout<<s<<endl;
    return found;
} 

int main() {
    int t, n;
    string s;
    bool found;
    cin>>t;
    while(t--) {
        cin>>s;
        while(solve(s)); 
        cout<<s<<endl;
    }
    return 0;
}
