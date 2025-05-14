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
        vector<int> v(10);
        for (char c : s)
        {
            v[c - '0']++;
        }
        int cnt = 0;
        cout << 9;
        v[9]--;
        for (int i = 8; i >= 0; i--)
        {
            if (v[i] > 0)
            {
                cout << i;
                v[i]--;
            }
            else
            {
                for (int j = i; j <=9; j++)
                {
                    if (v[j] > 0)
                    {
                        cout << j;
                        v[j]--;
                        break;
                    }
                }
            }
        }
        // for (auto i : v)
        // {
        //     cout << i << " ";
        // }
        cout << endl;
    }

    return 0;
}