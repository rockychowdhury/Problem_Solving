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
        int n, k;
        cin >> n >> k;
        int prev = 0;
        int sorted = true;
        In_range(i, 0, n)
        {
            int x;
            cin >> x;
            (x < prev) ? sorted = false : prev = x;
        }

        (k == 1) ? (n == 1 || sorted) ? cout << "YES" << endl : cout << "NO" << endl : cout << "YES" << endl;
    }

    return 0;
}