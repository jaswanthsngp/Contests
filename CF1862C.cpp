// https://codeforces.com/contest/1862/problem/C

#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// Almost solved in the contest, here is the alternate solution from editorial

int main() {
    int t, n;
    bool status;
    cin>>t;
    while(t--) {
        cin>>n; status= true;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        if(n!=v[0])
            cout<<"NO"<<endl;
        else {
            vector<int> h;
            for(int i=n-1; i>-1; i--) {
                while(h.size()<v[i])
                    h.push_back(i+1);
            }
            for(int i=0; i<n && status; i++) {
                if(v[i]!=h[i])
                    status= false;
            }
            if(status)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
