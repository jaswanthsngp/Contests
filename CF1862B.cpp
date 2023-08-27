// https://codeforces.com/contest/1862/problem/B

#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// solved in the contest

int main() {
    int t, n, a, b;
    cin>>t;
    while(t--) {
        vector<int> x;
        cin>>n>>a;
        x.push_back(a);
        for(int i=1; i<n; i++) {
            b= a;
            cin>>a;
            if(a<b)
                x.push_back(a);
            x.push_back(a);
        }
        cout<<x.size()<<endl;
        for(int i: x)
            cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
