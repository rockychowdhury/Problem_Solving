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
        int n;
        cin >> n;
        int a[n];
        In_range(i, 0, n) cin >> a[i];
        vector<int> ans;
        In_range(i, 0, n)
        {
            if (i + 1 != a[i])
            {
                ans.push_back(abs(i + 1 - a[i]));
            }
        }
        int k = ans[0];
        for (auto x : ans)
        {
            k = __gcd(k, x);
        }
        cout << k << endl;
    }

    return 0;
}