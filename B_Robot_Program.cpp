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
        ll n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        ll tmp_x = x;
        ll ans = 0;
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            k--;
            if (s[i] == 'L')
                tmp_x -= 1;
            else
                tmp_x += 1;
            if (tmp_x == 0)
            {
                ans ++;
                flag = true;
                tmp_x = 0;
                break;
            }
        }
        if(flag){
            for (ll i = 0; i < n; i++)
            {
                if (s[i] == 'L')
                    tmp_x -= 1;
                else
                    tmp_x += 1;
                if (tmp_x == 0)
                {
                    ans+=(k/(i+1));
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}