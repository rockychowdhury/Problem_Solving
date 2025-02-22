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
        int ans;
        cin >> ans;
        string s;
        cin >> s;
        int i = 0, j = ans - 1;
        while (i <= j)
        {
            if (s[i] == s[j])
                break;
            else
                ans -= 2;

            j--;
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}