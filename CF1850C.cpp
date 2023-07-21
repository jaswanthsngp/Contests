#include <iostream>
#include <string>
using namespace std;

// accepted in contest

int main() {
    int t;
    cin>>t;
    while (t--) {
        string str= "";
        char c;
        for(int i=0; i<64; i++) {
            cin>>c;
            if(c!='.')
                str+=c;
        }
        cout<<str<<endl;
    }
    return 0;
}