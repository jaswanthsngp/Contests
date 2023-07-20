// https://www.codechef.com/START99C/problems/CARDSWIPE

// solved in the contest
// increment cnt for every in and decrement for every out.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, n, a, cnt, maxCnt;
    cin>>t;
    while(t--) {
        cin>>n; cnt=0; maxCnt=0;
        vector<bool> isIn(n, false);
        for(int i=0; i<n; i++) {
            cin>>a;
            if(!isIn[a-1]) {
                isIn[a-1]= true;
                cnt++;
                if(cnt>maxCnt)
                    maxCnt= cnt;
            } else {
                isIn[a-1]= false;
                cnt--;
            }
        }
        cout<<maxCnt<<endl;
    }
	return 0;
}
