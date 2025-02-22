#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (ll i = s; i < n; i++)
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
    vector<int> v;
    In_range(i, 1, 999999 + 1)
    {
        ll x = i;
        ll dc = 0;
        while (x)
        {
            ll digit = x % 10;
            x /= 10;
            if (digit)
                dc++;
        }
        if (dc == 1)
            v.push_back(i);
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        In_range(i, 0, v.size())
        {
            if (v[i] <= n)
                ans++;
            else break;
        }
        cout << ans << endl;
    }
    return 0;
}