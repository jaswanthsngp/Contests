#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// accepted in contest

int main() {
    int t, n, k, cnt, maxCnt;
    cin>>t;
    while(t--) {
        cin>>n>>k; cnt=1, maxCnt=1;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(), a.end());
        for(int i=1; i<n; i++) {
            if(a[i]-a[i-1]>k) {
                cnt=1;
            } else {
                cnt++;
                if(cnt>maxCnt)
                    maxCnt= cnt;
            }
        }
        cout<<n-maxCnt<<endl;
    }
    return 0;
}