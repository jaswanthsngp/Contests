#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& nums, int target) {
    // Question 1, passed in the contest
    // URL: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
    int cnt= 0, n= nums.size();
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++)
            if(nums[i]+nums[j]<target)
                cnt++;
    }
    return cnt;
}

bool canMakeSubsequence(string str1, string str2) {
    // Question 2, passed in the contest
    // URL: https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/
    int n= str1.size(), m= str2.size(), i=0, j=0;
    while(j<m && i<n) {
        if(str2[j]==str1[i] || str2[j]-str1[i]==1 || str1[i]=='z' && str2[j]=='a') {
            // cout<<str1[i]<<" "<<str2[j]<<endl;
            j++;
        }
        i++;
    }
    if(j<m)
        return false;
    return true;
}

int minimumOperations(vector<int>& nums) {
    // Question 3, failed in the contest, the code here is from editorial
    // URL: https://leetcode.com/problems/sorting-three-groups/
    vector<int> sol(4, nums.size());
    for(int i: nums) {
        sol[i]--;
        sol[2]= min(sol[2], sol[1]);
        sol[3]= min(sol[3], sol[2]);
    }
    return sol[3];
}

int numberOfBeautifulIntegers(int low, int high, int k) {
    // tried in the contest and failed
    // URL: https://leetcode.com/problems/number-of-beautiful-integers-in-the-range
    // here are the two types of wrong submissions
    // Brute Force, TLE: https://leetcode.com/problems/number-of-beautiful-integers-in-the-range/submissions/1025855428/
    // Slightly Optimised, WA: https://leetcode.com/problems/number-of-beautiful-integers-in-the-range/submissions/1025914652/
    // couldn't understand the solutions too, so not posting any code
    return 0;   
}


int main() {
    cout<<"Problem 1"<<endl;
    vector<int> v= {1,1,2,3,1};
    cout<<countPairs(v, 2)<<endl;
    v= {-6,2,5,-2,-7,-1,3};
    cout<<countPairs(v, 2)<<endl;

    cout<<"Problem 2"<<endl;
    cout<<canMakeSubsequence("abc", "ad")<<endl;
    cout<<canMakeSubsequence("zc", "ad")<<endl;
    cout<<canMakeSubsequence("ab", "d")<<endl;

    cout<<"Problem 3"<<endl;
    v= {2,1,3,2,1};
    cout<<minimumOperations(v)<<endl;
    v= {1,3,2,1,3,3};
    cout<<minimumOperations(v)<<endl;
    v= {2,2,2,2,3,3};
    cout<<minimumOperations(v)<<endl;
    return 0;
}
