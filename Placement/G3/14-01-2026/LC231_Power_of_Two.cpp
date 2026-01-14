#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 0)
        return false;

    double f = log2(n);
    if (floor(f) == f)
        return true;

    return false;
}

int main() {
    int n;
    cin >> n;

    bool result = isPowerOfTwo(n);

    if (result)
        cout << "true";
    else
        cout << "false";

    return 0;
}
