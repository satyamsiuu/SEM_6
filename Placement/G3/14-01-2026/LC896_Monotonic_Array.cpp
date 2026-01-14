#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    if (nums.size() == 1)
        return true;

    int start = 0; // 0 = undefined, 1 = decreasing, -1 = increasing

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < nums[i - 1]) {
            if (start == 0)
                start = 1;
            else if (start == -1)
                return false;
        }
        else if (nums[i] > nums[i - 1]) {
            if (start == 0)
                start = -1;
            else if (start == 1)
                return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bool result = isMonotonic(nums);

    if (result)
        cout << "true";
    else
        cout << "false";

    return 0;
}
