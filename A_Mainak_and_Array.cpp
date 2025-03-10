#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int max_idx = 0;
        int max_val = 0;
        int min_idx = 0;
        int min_val = INT_MAX;
        In_range(i, 0, n)
        {
            cin >> arr[i];
        }
        int ans = 0;
        In_range(i, 0, n)
        {
            ans = max(ans, arr[i] - arr[0]);
            ans = max(ans, arr[n - 1] - arr[i]);
            ans = max(ans, arr[i] - arr[(i + 1) % n]);
        }
        cout << ans << endl;
    }

    return 0;
}