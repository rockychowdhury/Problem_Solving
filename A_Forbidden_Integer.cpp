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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl
                 << n << endl;
            In_range(i, 0, n) cout << 1 << " ";
            cout << endl;
        }
        else if (n % 2 && k >= 3)
        {
            cout << "YES" << endl
                 << n/2 << endl;
            In_range(i, 0, n / 2 - 1) cout << 2 << " ";
            cout << 3 << endl;
        }
        else if (n % 2 == 0 && k >= 2)
        {
            cout << "YES" << endl
                 << n/2 << endl;
            In_range(i, 0, n / 2) cout << 2 << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}