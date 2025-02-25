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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        int odd_cnt = 0;
        for (auto [c, cnt] : mp)
        {
            if (cnt % 2)
            {
                odd_cnt++;
            }
            // if(odd_cnt>1){
            //     if(cnt<=k){
            //         k-=cnt;
            //         mp[c]=0;
            //         odd_cnt--;
            //     }
            // }
        }
        if (odd_cnt-1 <= k)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}