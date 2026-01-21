#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<string>& logs) {
    int depth = 0;

    for (const string& log : logs) {
        if (log == "../") {
            if (depth > 0)
                depth--;
        }
        else if (log == "./") {
            // do nothing
        }
        else {
            depth++; // folder/
        }
    }
    return depth;
}

int main() {
    int n;
    cin >> n;

    vector<string> logs(n);
    for (int i = 0; i < n; i++) {
        cin >> logs[i];
    }

    cout << minOperations(logs);
    return 0;
}
