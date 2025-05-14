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
        vector<int> v(n);
        int ans = k;
        int ec = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans = min(ans, (k - v[i] % k) % k);
            if (v[i] % 2 == 0)
            {
                ec++;
            }
        }
        if (k == 4)
        {
            if (ec >= 2)
                ans = 0;
            else if (ec == 1)
                ans = min(ans, 1);
            else
                ans = min(ans, 2);
        }

        cout << ans << endl;
    }

    return 0;
}
