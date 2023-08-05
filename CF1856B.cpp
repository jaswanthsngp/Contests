#include <iostream>
using namespace std;

// failed in the contest

int main () {
    int t, n;
    long long a, sum;
    cin>>t;
    while(t--) {
        cin>>n; sum=0;
        for(int i=0; i<n; i++) {
            cin>>a;
            sum+=a;
        }
        if(sum<(n*(n+1)/2) || n==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}