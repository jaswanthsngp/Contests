// https://codeforces.com/contest/1844/problem/B

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else if(n==2)
            cout<<"2 1"<<endl;
        else {
            int *a;
            a= new int[n];
            a[0]= 2; a[n-1]= 3;
            a[n/2]= 1;
            for(int i=1; i<n/2; i++)
                a[i]= i+3;
            for(int i=n/2+1; i<n-1; i++)
                a[i]= i+2;
            for(int i=0; i<n; i++)
                cout<<a[i]<<' ';
            cout<<endl;
        }
    }
    return 0;
}