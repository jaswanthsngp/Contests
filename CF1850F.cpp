#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// failed in the contest, TLE

int main() {
    int t, n, k, cnt, maxCnt;
    cin>>t;
    while(t--) {
        cin>>n; k=n; maxCnt=0;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(), a.end());
        while(k>0) {
            cnt=0;
            for(int i=0; i<n && a[i]<=k; i++) {
                if(k%a[i]==0)
                    cnt++;
            }
            if(cnt>maxCnt)
                maxCnt= cnt;
            k--;
        }
        cout<<maxCnt<<endl;
    }
}