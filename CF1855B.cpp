// https://codeforces.com/contest/1855/problem/B

// pretests passed in the contest

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, cnt, maxCnt;
    unsigned long long int n;
    cin>>t;
    while(t--) {
        cin>>n; cnt=0; maxCnt=0;
        for(int i=1; i<100; i++) {
            if(n%i==0)
                cnt++;
            else
                cnt=0;
            if(cnt>maxCnt)
                maxCnt= cnt;
        }
        cout<<maxCnt<<endl;
    } 
}