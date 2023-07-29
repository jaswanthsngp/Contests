// https://codeforces.com/contest/1855/problem/A

#include <iostream>
using namespace std;

int main() {
    int t, n, p, changes;
    cin>>t;
    while(t--) {
        cin>>n; changes=0;
        for(int i=0; i<n; i++) {
            cin>>p;
            if(p==(i+1))
                changes++;
        }
        if(changes<2)
            cout<<changes<<endl;
        else
            cout<<(changes+1)/2<<endl;
    }
    return 0;
}