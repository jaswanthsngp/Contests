// https://codeforces.com/contest/1950/problem/C
// solved in the contest

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        int time;
        cin>>s;
        // converting time to HHMM integer format
        time = stoi(s.substr(0, 2))*100;
        time += stoi(s.substr(3, 2));
        // spicial case for 12th hour, along with general cases
        if(time/100==0 || time/100==12)
            cout<<12<<':';
        else
            cout<<setfill('0')<<setw(2)<<(time/100)%12<<':';
        // printing minute
        cout<<setfill('0')<<setw(2)<<time%100<<' ';
        // deciding between AM and PM
        if(time<1200) {
            cout<<"AM"<<endl;
        } else {
            cout<<"PM"<<endl;
        }
    }
    return 0;
}
