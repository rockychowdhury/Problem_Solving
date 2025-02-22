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
        int n, m;
        cin >> n >> m;
        int l = 0, h = 0;
        In_range(i, 0, n)
        {
            int x, y;
            cin >> x >> y;
            if(i==0)continue;
            l += x;
            h += y;
        }
        cout<<(l+m)*2+(h+m)*2<<endl;
    }

    return 0;
}