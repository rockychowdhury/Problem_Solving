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
        int arr[n];
        map<int, int> mp;
        In_range(i, 0, n)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int ansl = -1, ansr = -1, len = 0, r = 0;
        In_range(i, 0, n)
        {
            r = max(r, i);
            while (r < n && mp[arr[r]] == 1)
                r++;
            if (r - i > len)
            {
                len = r - i;
                ansl = i;
                ansr = r - 1;
            }
        }
        
        if (ansl == -1)
            cout << 0 << endl;
        else
            cout << ansl + 1 << " " << ansr + 1 << endl;
    }

    return 0;
}