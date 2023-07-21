#include <iostream>
using namespace std;

// accepted in contest

int main() {
    int t, n, *a, *b, best, besti;
    cin>>t;
    while(t--) {
        cin>>n; best= -1; besti= 0;
        a= new int[n];
        b= new int[n];
        for(int i=0; i<n; i++) 
            cin>>a[i]>>b[i];
        for(int i=0; i<n; i++) {
            if(a[i]<=10) {
                if(best<b[i]) {
                    best= b[i];
                    besti= i;
                }
            }
        }
        cout<<besti+1<<endl;
    }
    return 0;
}