#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int solve() {
    int n, mod, *a;
    cin>>n; mod=0;
    a = new int[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
        a[i]%=3;
        mod+=a[i];
    }
    mod%=3;
    if(mod==0) {
        return 0;
    } else {
        for(int i=0; i<n; i++)
            if(a[i]==mod)
                return 1;
    }
    return 3-mod;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<solve()<<endl;
    }
    return 0;
}
