#include <bits/stdc++.h>
using namespace std;

class MyCalendar {
private:
    vector<pair<int, int>> mycal;

public:
    MyCalendar() {
        // vector initializes automatically
    }

    bool book(int startTime, int endTime) {
        for (auto shed : mycal) {
            if (max(shed.first, startTime) < min(shed.second, endTime)) {
                return false; // overlap found
            }
        }
        mycal.push_back({startTime, endTime});
        return true;
    }
};

int main() {
    int q;
    cin >> q;

    MyCalendar cal;

    while (q--) {
        int start, end;
        cin >> start >> end;

        if (cal.book(start, end))
            cout << "true\n";
        else
            cout << "false\n";
    }

    return 0;
}
