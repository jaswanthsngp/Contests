// https://www.codechef.com/problems/SEGTHREE

// failed to pass tests in contest, solved the next day with the help of other's solutions

// count changes for all possible combos {{0,0,0}, {0,1,2}, ...., {2,1,0}}
// return the minimum of these counts

#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int t, n;
    vector<vector<int>> possibleCombos;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            for(int k=0; k<3; k++)
                if((i+j+k)%3==0)
                    possibleCombos.push_back({i, j, k});
    cin>>t;
    while(t--) {
        cin>>n; long long x, cnt, minCnt= 2*n;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin>>x;
            a[i]= x%3;
        }
        for(vector<int> combo: possibleCombos) {
            cnt=0;
            combo.insert(combo.end(), a.begin(), a.end());
            for(int i=3; i<n+3; i++) {
                if(combo[i]>combo[i-3]) {
                    cnt+= combo[i-3]+(3-combo[i]);
                    combo[i]= combo[i-3];
                } else if(combo[i-3]>combo[i]) {
                    cnt+= combo[i-3]-combo[i];
                    combo[i]= combo[i-3];
                }
            }
            // cout<<cnt<<' ';
            if(cnt<minCnt)
                minCnt= cnt;
        }
        cout<<minCnt<<endl;
    }
	return 0;
}
