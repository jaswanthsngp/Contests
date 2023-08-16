// https://codeforces.com/contest/1858/problem/A
#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// passed in the contest

int main() {
    int t, a, b, c;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        if(a>b)
            cout<<"First"<<endl;
        else if(a<b)
            cout<<"Second"<<endl;
        else if(c%2==1)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
    return 0;
}
