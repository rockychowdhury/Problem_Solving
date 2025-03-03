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
        string s;
        cin >> s;
        int cnt = 0;
        vector<int> ans;
        In_range(i, 1, n)
        {
            if (s[i] == s[i - 1])
                cnt++;
            else
            {
                ans.push_back(++cnt);
                cnt = 0;
            }
        }
        ans.push_back(++cnt);
        sort(ans.begin(), ans.end());
        if (ans.size() != 0)
            cout << ans.back() + 1 << endl;
    }

    return 0;
}