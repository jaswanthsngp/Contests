#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, n, d, s, x, k;
    cin>>t;
    while(t--) {
        cin>>n; k= 400;
        for(int i=0; i<n; i++) {
            cin>>d>>s;
            x= d+(s-1)/2;
            if(x<k)
                k= x;
        }
        cout<<k<<endl;
    }
    return 0;
}