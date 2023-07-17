// https://codeforces.com/contest/1848/problem/A
// lets take the mall as chessboard and vika will be caught if atleast one friend is in the same color as she is
// didn't solve in the contest, got hints from editorial later

#include <iostream>
using namespace std;

int main() {
    int t, n, m, k, x, y, a, b;
    bool sameColor;
    cin>>t;
    while(t--) {
        cin>>n>>m>>k;
        cin>>x>>y;
        sameColor= false;
        for(int i=0; i<k; i++) {
            cin>>a>>b;
            if((x+y)%2==(a+b)%2)
                sameColor= true;
        }
        if(sameColor)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}