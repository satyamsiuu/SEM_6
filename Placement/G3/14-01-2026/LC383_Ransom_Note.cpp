#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string r, string m) {
    int hash[26] = {0};

    for (int i = 0; i < m.length(); i++)
        hash[m[i] - 'a']++;

    for (int i = 0; i < r.length(); i++)
        hash[r[i] - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (hash[i] < 0)
            return false;
    }
    return true;
}

int main() {
    string r, m;
    cin >> r >> m;

    bool result = canConstruct(r, m);

    if (result)
        cout << "true";
    else
        cout << "false";

    return 0;
}
