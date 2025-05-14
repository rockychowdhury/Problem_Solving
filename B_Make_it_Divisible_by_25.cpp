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
        string s;
        cin >> s;
        ll op = 0;
        // while (s[s.size() - 1] != '5' && s[s.size() - 1] != '0' && s.size())
        // {
        //     s.erase(s.size() - 1);
        //     op++;
        // }
        // if (s[s.size() - 1] == '5')
        // {
        //     ll i = s.size() - 2;
        //     ll op2 = INT_MAX;
        //     while (i >= 0 && s[i] != '2' && s[i] != '7')
        //     {
        //         if (s[i] == '0')
        //         {
        //             op2 = op + 1;
        //             ll k = i - 1;
        //             while (k >= 0 && s[k] != '0' && s[k] != '5')
        //             {
        //                 op2++;
        //                 k--;
        //             }
        //         }
        //         op++;
        //         i--;
        //     }
        //     op = min(op, op2);
        // }
        // else if (s[s.size() - 1] == '0')
        // {
        //     ll i = s.size() - 2;
        //     ll op2 = INT_MAX;
        //     if (s[i] == '5')
        //     {
        //         op2 = op + 1;
        //         ll k = i - 1;
        //         while (k >= 0 && s[k] != '2' && s[k] != '7')
        //         {
        //             op2++;
        //             k--;
        //         }
        //     }

        //     while (i >= 0 && s[i] != '0' && s[i] != '5')
        //     {
        //         op++;
        //         i--;
        //     }
        //     op = min(op, op2);
        // }

        int i = s.size() - 1;
        int j = i;
        ll ans = INT_MAX;
        while (i != 0)
        {

            if (s[i] == '0')
            {
                j = i - 1;
                ll cnt = op;
                while (j >= 0 && s[j] != '0' && s[j] != '5')
                {
                    cnt++;
                    j--;
                }
                ans = min(ans, cnt);
            }
            else if (s[i] == '5')
            {
                j = i - 1;
                ll cnt = op;
                while (j >= 0 && s[j] != '2' && s[j] != '7')
                {
                    cnt++;
                    j--;
                }
                ans = min(ans, cnt);
            }
            i--;
            op++;
        }
        ans = min(op, ans);
        cout << ans << endl;
    }

    return 0;
}