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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> grid(n, vector<ll>(m));
        string s;
        cin >> s;
        for (ll i = 0; i < n; ++i)
        {
            for (ll j = 0; j < m; ++j)
            {
                cin >> grid[i][j];
            }
        }
        ll x = 0, y = 0;
        for (ll i = 0; i < s.length(); i++)
        {

            ll sum = 0;
            if (s[i] == 'D')
            {
                for (ll j = 0; j < m; ++j)
                {
                    sum += grid[x][j];
                }
                grid[x][y] -= sum;
                sum = 0;
                x++;
            }
            else
            {
                for (ll j = 0; j < n; ++j)
                {
                    sum += grid[j][y];
                }
                grid[x][y] -= sum;
                sum = 0;
                y++;
            }
        }
        ll sum = 0;
        for (ll j = 0; j < m; ++j)
        {
            sum -= grid[n - 1][j];
        }
        grid[n - 1][m - 1] = sum;
        for (ll i = 0; i < n; ++i)
        {
            for (ll j = 0; j < m; ++j)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}