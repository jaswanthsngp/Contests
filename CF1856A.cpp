#include <iostream>
#include <limits>
#include <vector>
using namespace std;

// passed in the contest

int main () {
    int t, n, *a, max, x;
    cin>>t;
    while(t--) {
        cin>>n; max= 0; x=0;
        a= new int[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++) {
            if(a[i]>=max) {
                max= a[i];
            } else {
                x= max;
            }
        }
        cout<<x<<endl;
    }
}