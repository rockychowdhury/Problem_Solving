#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (ll i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const ll MOD = 998244353;
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
    for (ll tt = 0; tt < t; tt++)
    {
        ll n;
        cin >> n;

        ll arr[n];
        In_range(i, 0, n) cin >> arr[i];

        vector<ll> twos(n, 0), ones, threes;
        ll cnt = 0;
        In_range(i, 0, n)
        {
            if (arr[i] == 2)
                cnt++;
            else if (arr[i] == 1)
                ones.push_back(i);
            else
                threes.push_back(i);
            twos[i] = cnt;
        }

        ll ans = 0;
        In_range(i, 0, ones.size())
        {
            for (ll j = 0; j < threes.size(); j++)
            {
                if (threes[j] - ones[i] > 1)
                {
                    ll two = twos[threes[j]] - twos[ones[i]];
                    ll sets;
                    if (two % 2)
                    {
                        ll x = pow(2, (two - 1) / 2);
                        sets = (x * x % MOD * 2 % MOD) - 1;
                    }
                    else
                    {
                        ll x = pow(2, (two / 2));
                        sets = (x * x % MOD) - 1;
                    }

                    ans += sets % MOD;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}