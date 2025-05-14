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
        ll x, n;
        cin >> x >> n;
        ll rem = n % 4;
        ll k = n / 4;
        if (x % 2)
        {
            if (rem == 0)
            {
                cout << x << endl;
                continue;
            }
            else if (rem == 1)
            {
                cout << (1 + 4 * k) + x << endl;
                continue;
            }
            else if (rem == 2)
            {
                cout << x - 1 << endl;
                continue;
            }
            else
            {
                cout << x - 4 * (k + 1) << endl;
                continue;
            }
        }
        else
        {
            if (rem == 0)
            {
                cout << x << endl;
                continue;
            }
            else if (rem == 1)
            {
                cout << x - (1 + 4 * k) << endl;
                continue;
            }
            else if (rem == 2)
            {
                cout << x + 1 << endl;
                continue;
            }
            else
            {
                cout << x + 4 * (k + 1) << endl;
                continue;
            }
        }
    }

    return 0;
}