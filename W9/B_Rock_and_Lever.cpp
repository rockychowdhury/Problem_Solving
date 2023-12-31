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
int MSB(int x)
{
    int c = 0;
    while (x >>= 1)
        c++;
    return c;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, ll> m;
        In_range(i, 0, n)
        {
            ll a;
            cin >> a;
            m[MSB(a)]++;
        }
        ll ans = 0;
        for (auto x : m)
        {
            ans += (x.second * (x.second - 1) / 2);
        }
        cout << ans << endl;
    }

    return 0;
}