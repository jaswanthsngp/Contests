// https://www.codechef.com/START98C/problems/BLDST

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    long long int t, n, m, a, cnt, x;
    cin>>t;
    while(t--) {
        cin>>n>>m; cnt= n;
        for(long long int i=0; i<m; i++) {
            cin>>a;
            cnt-=(n-a);
        }
        if(cnt>0)
            cout<<cnt<<endl;
        else
            cout<<0<<endl;
    }
	return 0;
}