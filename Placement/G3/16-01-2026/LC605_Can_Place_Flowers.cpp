#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if (n == 0)
        return true;

    int size = flowerbed.size();
    if (size == 0)
        return false;

    if (size == 1) {
        if (flowerbed[0] == 0 && n <= 1)
            return true;
        else
            return false;
    }

    for (int i = 0; i < size; i++) {
        if (i == 0) {
            if (flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }
        else if (i == size - 1) {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }
        else {
            if (flowerbed[i] == 0 &&
                flowerbed[i - 1] == 0 &&
                flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }

        if (n == 0)
            return true;
    }

    return false;
}

int main() {
    int len;
    cin >> len;

    vector<int> flowerbed(len);
    for (int i = 0; i < len; i++) {
        cin >> flowerbed[i];
    }

    int n;
    cin >> n;

    if (canPlaceFlowers(flowerbed, n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
