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
        int one = 0, zero = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (!x)
                zero++;
            else if (x == 1)
                one++;
        }
        cout << (1ll << zero) * one << endl;
    }
    return 0;
}

