// https://www.codechef.com/START98C/problems/FINDK3

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, x, y, z;
    cin>>t;
    while(t--) {
        cin>>x>>y>>z;
        if((y*z)%x==0)
            cout<<y*z<<' '<<x<<endl;
        else if((z*x)%y==0)
            cout<<z*x<<' '<<y<<endl;
        else if((x*y)%z==0)
            cout<<x*y<<' '<<z<<endl;
        else
            cout<<-1<<endl;
    }
	return 0;
}