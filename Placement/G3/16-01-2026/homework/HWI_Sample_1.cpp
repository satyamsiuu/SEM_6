#include <bits/stdc++.h>
using namespace std;

int minExercisesToGetTired(int E, vector<int>& A) {
    sort(A.begin(), A.end(), greater<int>());

    int energy = E;
    int count = 0;

    for (int i = 0; i < A.size(); i++) {
        for (int use = 0; use < 2; use++) {
            energy -= A[i];
            count++;

            if (energy <= 0)
                return count;
        }
    }

    return -1;
}

int main() {
    int E, N;
    cin >> E;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << minExercisesToGetTired(E, A);
    return 0;
}
