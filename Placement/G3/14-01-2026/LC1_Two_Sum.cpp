#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++) {
        int left = target - nums[i];

        if (mpp.find(left) != mpp.end()) {
            return {i, mpp[left]};
        }
        mpp[nums[i]] = i;
    }
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1];

    return 0;
}
