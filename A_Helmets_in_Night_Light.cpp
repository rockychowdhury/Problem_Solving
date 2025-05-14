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
bool cmp(pii a, pii b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
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
        ll n, p;
        cin >> n >> p;
        vector<pair<ll,ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        sort(v.begin(), v.end(), cmp);
        ll cost = p;
        ll rem = n-1;
        for (auto [x, y] : v)
        {
            if (x <= p && rem > 0)
            {
                cost += (min(y, rem) * x);
                rem -= min(rem, y);
                
            }
            else
            {
                cost += (rem * p);
                rem = 0;
                break;
            }
        }
        cout << cost << endl;
    }

    return 0;
}