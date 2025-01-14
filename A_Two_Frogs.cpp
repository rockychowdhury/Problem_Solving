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
        int n, a, b;
        cin >> n >> a >> b;
        // if (b > a)
        // {
        //     ((((a + 1) != b) && (a + 1) != n + 1)) ? cout << "YES" << endl : cout << "NO" << endl;
        // }
        // else
        // {
        //     ((a - 1) != b && (a - 1) != 0) ? cout << "YES" << endl : cout << "NO" << endl;
        // }
        // cout<<
        ((abs(a-b))%2)?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }

    return 0;
}