#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = 0, j = 0;
    int count = 0;

    if (s.size() == 0)
        return 0;

    while (i < g.size()) {
        if (j > s.size() - 1)
            break;

        if (g[i] <= s[j]) {
            count++;
            i++;
            j++;
        } else {
            j++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> g(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }

    int m;
    cin >> m;

    vector<int> s(m);
    for (int i = 0; i < m; i++) {
        cin >> s[i];
    }

    cout << findContentChildren(g, s);

    return 0;
}
