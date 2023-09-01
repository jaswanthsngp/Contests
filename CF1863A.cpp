#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, n, a, q, p;
    cin>>t;
    while(t--) {
        cin>>n>>a>>q;
        string s= "";
        cin>>s;
        if(a==n)
            cout<<"YES"<<endl;
        else {
            p= a;
            for(int i=0; i<q; i++) {
                if(s[i]=='+') {
                    p++;
                    a++;
                    if(n==a) {
                        break;
                    }
                } else 
                    a--;
            }
            if(a==n)
                cout<<"YES"<<endl;
            else if(p>=n)
                cout<<"MAYBE"<<endl;
            else 
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
