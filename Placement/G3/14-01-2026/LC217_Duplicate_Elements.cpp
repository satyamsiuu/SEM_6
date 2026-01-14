#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    set<int> a;

    for (int i = 0; i < nums.size(); i++) {
        a.insert(nums[i]);
    }

    return nums.size() != a.size();
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bool result = containsDuplicate(nums);

    if (result)
        cout << "true";
    else
        cout << "false";

    return 0;
}
