#include <bits/stdc++.h>
using namespace std;


int minimumRightShifts(vector<int> nums) {
    // solved in the contest
    int n= nums.size();
    for(int i=0; i<n; i++) {
        bool sorted = true;
        for(int j=0; j<n-1 && sorted; j++) {
            // cout<<(i+j)%n<<' ';
            if(nums[(i+j)%n]>nums[(i+j+1)%n])
                sorted= false;
        }
        // cout<<endl;
        if(sorted && i!=0)
            return n-i;
        if(sorted)
            return i;
    }
    return -1;
}

int minLengthAfterRemovals(vector<int> nums) {
    // question 2
    // WA in the contest, from other's solutions
    int n = nums.size(), cnt = 0;
    for(int i=0, j = (n+1)/2; i<n/2, j<n;) {
        if(nums[i] < nums[j])
            nums[i] = -1, nums[j] = -1;
        i++, j++;
    }
    for(auto x:nums)
        if(x!=-1) cnt++;
    return cnt;
}

int main() {
    // 1
    cout<<minimumRightShifts({3, 4, 5, 1, 2})<<' ';
    cout<<minimumRightShifts({1, 3, 5})<<' ';
    cout<<minimumRightShifts({2, 1, 4})<<endl;
    // 2
    cout<<minLengthAfterRemovals({1, 3, 4, 9})<<' ';
    cout<<minLengthAfterRemovals({2, 3, 4, 9})<<' ';
    cout<<minLengthAfterRemovals({1, 1, 2})<<endl;
    return 0;
}