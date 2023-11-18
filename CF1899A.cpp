#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// solved in the contest

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%3==0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
    return 0;
}
