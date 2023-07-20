// https://www.codechef.com/START99C/problems/MOZZ

// solved in the contest

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, x, y, r;
    cin>>t;
    while(t--) {
        cin>>x>>y>>r;
        x+=r/30;
        cout<<x/y+(x%y?1:0)<<endl;
    }
	return 0;
}
