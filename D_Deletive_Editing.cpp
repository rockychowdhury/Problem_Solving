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
        string d_s, f_s;
        cin >> d_s >> f_s;
        vector<int> index;
        vector<int> freq(26, 0);
        for (auto c : f_s)
            freq[c - 'A']++;
        for (auto c : f_s)
        {
            int cnt = 0;
            for (int i = d_s.size() - 1; i >= 0; i--)
            {
                if (d_s[i] == c)
                {
                    cnt++;
                    if (cnt == freq[c - 'A'])
                    {
                        // cout << d_s[i] << " ->" << i << " ";
                        d_s[i] = '#';
                        freq[c-'A']--;
                        index.push_back(i);
                    }
                }
            }
        }
        if (f_s.size() != index.size())
        {
            cout << "NO" << endl;
            continue;
        }
        string ans = "YES";
        for (int i = 1; i < index.size(); i++)
        {
            if (index[i] < index[i - 1])
            {
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}