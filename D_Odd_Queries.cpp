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
        int n, q;
        cin >> n >> q;
        ll arr[n+1];
        arr[0] = 0;
        In_range(i, 1, n+1) {
            ll x;cin >> x;
            arr[i] = x+arr[i-1];
        }
        bool sum = (arr[n ] % 2 == 0);
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            if (((((r - l + 1) * k) % 2 == 0) != ((arr[r] - arr[l-1]) % 2 == 0)))
                sum = !sum;
            sum ? cout << "NO\n" : cout << "YES\n";
            sum = (arr[n ] % 2 == 0);
        }
    }

    return 0;
}