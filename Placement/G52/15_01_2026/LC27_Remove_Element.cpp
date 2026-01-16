#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int n = nums.size();
    int i = 0, j = 0;

    while (i < n) {
        if (nums[i] != val)
            nums[j++] = nums[i];
        i++;
    }
    return j;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int val;
    cin >> val;

    int k = removeElement(nums, val);

    cout << k << "\n";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
