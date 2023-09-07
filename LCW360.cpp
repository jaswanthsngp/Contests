// https://leetcode.com/contest/weekly-contest-360/

#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int furthestDistanceFromOrigin(string moves) {
    // farthest point someone can reach following given commands
    // L for left, R for right, _ for any
    int l=0, r=0, a=0;
    for(char i: moves) {
        if(i=='L')
            l++;
        else if(i=='R')
            r++;
        else
            a++;
    }
    return abs(l-r)+a;
}

long long minimumPossibleSum(int n, int target) {
    // find the minimum possible sum of array where no pair sums to target
    if(n==1)
        return 1;
    long long sum=0, cnt=0, i=1;
    while(cnt<n) {
        if(i<=target/2 || i>=target) {
            cnt++;
            sum+=i;
        }
        i++;
    }
    return sum;
}

int main() {
    // question 1
    cout<<furthestDistanceFromOrigin("L_RL__R")<<' ';
    cout<<furthestDistanceFromOrigin("_R__LL_")<<' ';
    cout<<furthestDistanceFromOrigin("_______")<<endl;

    // question 2
    cout<<minimumPossibleSum(2, 3)<<' ';
    cout<<minimumPossibleSum(3, 3)<<' ';
    cout<<minimumPossibleSum(1, 1)<<endl;
    return 0;
}
