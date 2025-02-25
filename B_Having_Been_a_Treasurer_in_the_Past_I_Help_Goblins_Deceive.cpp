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
        ll _ = 0, m = 0;
        for (char c : s)
        {
            if (c == '_')
                _++;
            else
                m++;
        }
        // if(_==0 || m<=1){
        //     cout<<0<<endl;
        //     continue;
        // }
        // else{
        if (m % 2 == 0)
        {
            cout << 1ll * (m / 2) * _ * (m / 2) << endl;
        }
        else
        {
            cout << 1ll * (m / 2) * _ * ((m / 2) + 1) << endl;
        }
        // }
    }

    return 0;
}