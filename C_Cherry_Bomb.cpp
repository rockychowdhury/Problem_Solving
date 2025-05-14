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
        ll n, k;
        cin >> n >> k;
        // cout<<n<<k<<endl;
        vector<ll> a(n), b(n);
        ll mxA = INT_MIN;
        ll mnA = INT_MAX;
        In_range(i, 0, n)
        {
            cin >> a[i];
            mxA = max(mxA, a[i]);
            mnA = min(mnA, a[i]);
        }
        ll sum = -1;
        bool flag = false;
        ll negcount = 0;
        In_range(i, 0, n)
        {
            cin >> b[i];
        }
        In_range(i, 0, n)
        {
            if (b[i] != -1)
            {
                ll c_sum = a[i] + b[i];
                if (sum == -1)
                {
                    sum = c_sum;
                }
                else if (c_sum != sum)
                {
                    flag = true;
                    break;
                }
                if (sum < mxA || (sum - mnA) > k)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << 0 << endl;
            continue;
        }
        if (sum == -1)
        {
            ll mxB = mxA - mnA;
            cout << k - mxB + 1 << endl;
        }
        else
        {
            bool flag = true;
            for (ll i = 0; i < n; i++)
            {
                ll bi = sum - a[i];
                if (bi < 0 || bi > k)
                {
                    flag = false;
                    break;
                }
            }
            cout << (flag ? 1 : 0) << endl;
        }
    }

    return 0;
}