// https://codeforces.com/contest/1858/problem/C

// passed and failed in te contest
// re-arrange the permutation so that distict gcds of adjacent values are more
#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


// this is what was failed in the contest
// thought of putting all the divisors of a number together
/*
int main() {
    int t, n, max;
    cin>>t;
    while(t--) {
        cin>>n; max= sqrt(n);
        vector<int> a(n,1), p;
        for(int i=n; i>0; i--) {
            for(int j=1; j<=n; j++) {
                if(i%j==0 && a[i/j-1]>0) {
                    p.push_back(i/j);
                    a[i/j-1]--;
                }
            }
        }
        for(int i=0; i<n; i++) 
            if(a[i]>0)
                p.push_back(i+1);
        for(int i: p)
            cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
*/

// from the editorial
// put atleast one of its multiple with it

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        vector<int> a;
        cin>>n;
        for(int i=1; i<=n; i+=2) {
            for(int j=i; j<=n; j*=2) {
                a.push_back(j);
            }
        }
        for(int i: a)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
