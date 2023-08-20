#include <bits/stdc++.h>
using namespace std;

bool isAcronym(vector<string>& words, string s) {
    // Problem 1, passed in the contest
    // URL: https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/
    if(words.size()!=s.size())
        return false;
    int n= words.size();
    for(int i=0; i<n; i++) {
        if(words[i][0]!=s[i])
            return false;
    }
    return true;
}

int minimumSum(int n, int k) {
    // Problem 2, passed in the contest
    // URL: https://leetcode.com/problems/determine-the-minimum-sum-of-a-k-avoiding-array/
    int i=1, sum=0, cnt=0;
    while(cnt<n) {
        if(i<=k/2 || i>=k) {
            sum+=i;
            cnt++;
        }
        i++;
    }
    return sum;
}

// Didn't attempt the rest

int main() {
    cout<<"Problem 1"<<endl;
    vector<string> v;
    v= {"alice","bob","charlie"};
    cout<<isAcronym(v, "abc")<<endl;
    v= {"an","apple"};
    cout<<isAcronym(v, "a")<<endl;
    v= {"never","gonna","give","up","on","you"};
    cout<<isAcronym(v, "ngguoy")<<endl;

    cout<<"Problem 2"<<endl;
    cout<<minimumSum(5, 4)<<endl;
    cout<<minimumSum(2, 6)<<endl;
    return 0;
}
