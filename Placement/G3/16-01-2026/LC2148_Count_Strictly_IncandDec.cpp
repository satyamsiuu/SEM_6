#include <bits/stdc++.h>
using namespace std;

int countElements(vector<int>& nums) {
    auto mx = max_element(nums.begin(), nums.end());
    auto mn = min_element(nums.begin(), nums.end());

    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < *mx && nums[i] > *mn)
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << countElements(nums);

    return 0;
}
