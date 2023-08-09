// https://codeforces.com/contest/1857/B

// return the maximum possible value of a given number after rounding off to any number of places
// pretests passed in the contest, then TLE on further testing
// here is the code efficient code from editorial

#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, n, r;
    string s;
    bool found;
    cin>>t;
    while(t--) {
        cin>>s;
        s= "0"+s;
        n= s.size(), r= n;
        for(int i=n-1; i>0; i--) {
            if(s[i]>'4') {
                if(s[i-1]!='9')
                    s[i-1]++;
                r= i;
            }
        }
        for(int i=r; i<n; i++)
            s[i]='0';
        if(s[0]=='0')
            cout<<s.substr(1)<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
