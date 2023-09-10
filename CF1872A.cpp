#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, a, b, c;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        a= (abs(a-b)+1)/2;
        cout<<a/c+(a%c==0?0:1)<<endl;
    }
    return 0;
}