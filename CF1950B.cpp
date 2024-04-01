// https://codeforces.com/contest/1950/problem/B
// solved in the contest

#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=0; i<2*n; i++) {
            for(int j=0; j<2*n; j++) {
                if(i%4<2) {
                    if(j%4<2) {
                        cout<<'#';
                    } else {
                        cout<<'.';
                    }
                } else {
                    if(j%4<2) {
                        cout<<'.';
                    } else {
                        cout<<'#';
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
