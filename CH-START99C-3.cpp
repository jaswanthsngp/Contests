// https://www.codechef.com/START99C/problems/ONEFROMK

// solved in contest
// we take the sum of n-i maximum elements for ith element

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n; long long sum=0;
        vector<long long> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(), a.end());
        for(int i=0; i<n; i++)
            sum+=a[i];
        for(int i=0; i<n; i++){
            cout<<sum<<' ';
            sum-=a[i];
        }
        cout<<endl;
    }
	return 0;
}
