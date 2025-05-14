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
        int ab = 0, ba = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == 'a' && s[i - 1] == 'b')
            {
                ba++;
            }
            if (s[i] == 'b' && s[i - 1] == 'a')
                ab++;
        }
        // cout << ab << " " << ba << endl;
        if (ab == ba)
        {
            cout << s << endl;
            continue;
        }
        if (s[s.size() - 1] == 'b')
        {
            s[s.size() - 1] = 'a';
        }
        else
            s[s.size() - 1] ='b';
        cout << s << endl;
    }

    return 0;
}