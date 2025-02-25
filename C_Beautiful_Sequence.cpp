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

ll pw(ll a, ll b, ll m)
{
    if (b == 0)
        return 1; 
    ll res = pw(a, b / 2, m);
    res = (res * res) % m; 
    
    if (b % 2 == 1)
        res = (res * a) % m; 
    
    return res;
}
ll binpow(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res % mod;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // cout << pw(2, 3, MOD);
    // return 0;
    vector<ll>power(1000005, 0);
    power[0] = 1;
    In_range(i, 1, 1000005)
    {
        power[i] = (power[i - 1] * 2) % MOD;
    }
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
                    ll sets = power[two]-1;
                    ans = (ans % MOD + sets % MOD) % MOD;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}