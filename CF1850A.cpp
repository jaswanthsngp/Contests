#include <iostream>
using namespace std;

// accepted in contest

int main() {
    int t, a, b, c;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        if(a+b>=10 || b+c>=10 || c+a>=10)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}