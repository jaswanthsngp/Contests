// https://codeforces.com/contest/1857/A

// tell if an array can be divided into two groups with equal parities
// solved in the contest

#include <iostream>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, n, a, sum;
    cin>>t;
    while(t--) {
        cin>>n; sum=0;
        for(int i=0; i<n; i++) {
            cin>>a;
            sum+=a;
        }
        if(sum%2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
