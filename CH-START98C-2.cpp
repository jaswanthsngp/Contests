// https://www.codechef.com/START98C/problems/AIRM

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, n, x, max;
    cin>>t;
    while(t--) {
        cin>>n; max=0; n*=2;
        int runway[1440] = {};
        for(int i=0; i<n; i++) {
            cin>>x;
            runway[x]++; 
        }
        for(int i=0; i<1440; i++)
            if(runway[i]>max)
                max= runway[i];
        cout<<max<<endl;
    }
	return 0;
}