#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, n, a, sum;
    cin>>t;
    while(t--) {
        cin>>n;
        sum = 0;
        while(n--) {
            cin>>a;
            sum+=abs(a);
        }
        cout<<sum<<endl;
    }
    return 0;
}
