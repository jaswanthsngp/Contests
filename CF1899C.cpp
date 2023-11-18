#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// not solved in the contest, but realized from editorial

// mn stores the minimum possible sum
// s stores the current sum
// mx stores the maximum sum


int main() {
    int t, n, a, b, mn, s, mx;
    cin>>t;
    while(t--) {
        cin>>n;
        cin>>a; mn = min(0, a); s = a; mx = a;
        for(int i=1; i<n; i++) {
            b = a;
            cin>>a;
            if(abs(a%2)==abs(b%2)) {
                mn = 0;
                s = 0;
            }
            s+=a;
            mx = max(mx, s-mn);
            mn = min(s, mn); 
        }
        cout<<mx<<endl;
    }
    return 0;
}
