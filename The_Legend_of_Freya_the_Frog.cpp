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
        long long x, y, d;
        cin >> x >> y >> d;
        long long X, Y;
        if (x % d == 0)
            X = x / d;
        else
            X = x / d + 1;
        if (y % d == 0)
            Y = y / d;
        else
            Y = y / d + 1;
        if (X > Y)
        {
            if (X - Y == 1)
            {
                cout << X + Y << endl;
            }
            else
            {
                cout << 2*X-1<< endl;
                
            }
        }
        else if (X < Y)
        {
            cout << Y * 2 << endl;
        }
        else
        {
            cout << X + Y << endl;
        }
    }

    return 0;
}