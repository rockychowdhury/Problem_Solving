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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count[n];
        ll cnt = 0;
        In_range(i, 0, n)
        {
            ll x;
            cin >> x;
            if (x == 2)
                cnt++;
            count[i] = cnt;
        }
        ll k = -1;
        In_range(i, 0, n)
        {
            if (count[i] == count[n - 1] - count[i])
            {
                k = i + 1;
                break;
            }
        }
        cout << k << endl;
    }

    return 0;
}