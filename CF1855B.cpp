// https://codeforces.com/contest/1855/problem/B

// pretests passed in the contest, then accepted.
// thought that if the two consequent numbers share a multiple, those must be small

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, cnt, maxCnt;
    unsigned long long int n;
    cin>>t;
    while(t--) {
        cin>>n; cnt=0; maxCnt=0;
        for(int i=1; i<100; i++) {
            if(n%i==0)
                cnt++;
            else
                cnt=0;
            if(cnt>maxCnt)
                maxCnt= cnt;
        }
        cout<<maxCnt<<endl;
    } 
}

// It works! However, here is the code from editorial.
// he said, the first one to break the modulus is the limit

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     unsigned long long int n;
//     cin>>t;
//     while(t--) {
//         cin>>n; int i;
//         for(i=1; i<n && n%i==0; i++) {}
//         if(n==i)
//             cout<<i<<endl;
//         else
//             cout<<i-1<<endl;
//     }
//     return 0;
// }
