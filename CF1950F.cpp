// https://codeforces.com/contest/1950/problem/F
// didn't even try to attempt in the contest. easy problem, could have solved it then and there

#include <iostream>
#include <queue>
using namespace std;

bool pushToQueue(queue<int> &q, int &a, int &b, int &c) {
    if(a-->0)
        q.push(2);
    else if(b-->0)
        q.push(1);
    else if(c-->0)
        q.push(0);
    else
        return false;
    return true;
}

int hght(int a, int b, int c) {
    // reject if the no. of nodes and vertices doesn't match
    if(2*a+b+1 != a+b+c)
        return -1;
    // if the condition matches, find height by inserting (or arranging)
    // the nodes through level order traversal
    int level = -1;
    queue<int> q;
    pushToQueue(q, a, b, c);
    while(!q.empty()) {
        int sz = q.size();
        while(sz--) {
            // find the capacity of the node and assign children accordingly
            int children = q.front(); q.pop();
            while(children--) {
                // pushes to queue and returns false on faliure
                // most probably not needed, but just in case
                if(!pushToQueue(q, a, b, c))
                    return -1;
            }
        }
        level++;
    }
    return level;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;
        cout<<hght(a, b, c)<<endl;
    }
    return 0;
}
