#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t, a, b, l;
    cin>>t;
    while(t--) {
        cin>>a>>b>>l;
        vector<int> va, vb;
        set<int> s;
        int p = 1, cnt = 0;
        while(p<l) {
            va.push_back(p);
            cout<<p<<' ';
            p*=a;
        }
        cout<<endl;
        p = 1;
        while(p<l) {
            vb.push_back(p);
            cout<<p<<' ';
            p*=b;
        }
        cout<<endl;
        for(int i: va) {
            for(int j: vb) {
                long x = i*j;
                if(l%x==0)
                    s.insert(l/x);
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
