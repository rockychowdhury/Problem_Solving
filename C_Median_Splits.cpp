#include <iostream>
#include <vector>
using namespace std;

bool solve(int n, int k, const vector<int>& a) {
    bool has_k_or_less = false;

    // If array has only 3 elements, just check the condition manually
    if (n == 1) return a[0] <= k;

    // Check if there's at least one element ≤ k
    for (int i = 0; i < n; ++i) {
        if (a[i] <= k) {
            has_k_or_less = true;
            break;
        }
    }

    if (!has_k_or_less) return false;

    // Try to find two elements ≤ k that are within 2 positions apart
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j <= i + 2 && j < n; ++j) {
            if (a[i] <= k && a[j] <= k) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (solve(n, k, a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
