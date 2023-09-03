// https://leetcode.com/contest/weekly-contest-361

#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int countSymmetricIntegers(int low, int high) {
    // count number of symmetric integers between low to high inclusive
    // convert it to string and balance from both ends
    // if balanced at last, increment, else go for the next
    // time O(n*m) (n=high-low+1, m= x.size()), space= O(1)
    int cnt= 0;
    for(int i=low; i<=high; i++) {
        int l, sum=0;
        string n= to_string(i);
        l= n.size();
        if(l%2==0) {
            for(int j=0; j<l/2; j++) {
                sum+=(n[j]-'0');
                sum-=(n[l-j-1]-'0');
            }
            if(sum==0)
                cnt++;
        }
    }
    return cnt;
}

int minimumOperations(string num) {
    // find minimum number of digits to be removed to make num divisible by 25
    // check for 00, 25, 50, 75
    // go from behind, if any occurs, return resultant
    // if only one 0 occurs, n-1 and if none, n
    // time: O(n), space: O(1)
    int n= num.size(), zz=0, tf=0, fz=0, sf=0;
    for(int i=n-1; i>-1; i--) {
        if(num[i]=='0') {
            if(zz==0) zz++;
            else return n-i-2;
            if(fz==0) fz++;
        } else if(num[i]=='5') {
            if(tf==0) tf++;
            if(sf==0) sf++;
            if(fz==1) return n-i-2;
        } else if(num[i]=='2') {
            if(tf==1) return n-i-2;
        } else if(num[i]=='7') {
            if(sf==1) return n-i-2;
        }
    }
    if(zz==1)
        return n-1;
    return n;
}

int main() {
    cout<<countSymmetricIntegers(1, 1000)<<' '<<countSymmetricIntegers(1200, 1230)<<endl;
    cout<<minimumOperations("2245047")<<' '<<minimumOperations("2908305")<<' '<<minimumOperations("10")<<' '<<minimumOperations("11")<<endl;
    return 0;
}
