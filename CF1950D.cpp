// https://codeforces.com/contest/1950/problem/D
// solved in the contest

#include <iostream>
#include <vector>
using namespace std;

// array of binary decimals
vector<int> arr = {10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 
                10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};

// return true if n is divisible by only binary decimals
bool condition(int n) {
    if(n<1)
        return false;
    if(n==1)
        return true;
    // cout<<n<<' ';
    bool res = false;
    int sz = arr.size();
    for(int i=0; i<sz && !res; i++)
        if(n%arr[i]==0)
            res = res || condition(n/arr[i]);
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(condition(n)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
