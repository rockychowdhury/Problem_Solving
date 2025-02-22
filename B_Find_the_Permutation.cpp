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
        vector<int> ans(n);
        vector<string> g(n);
        In_range(i, 0, n) cin >> g[i];
        In_range(i, 0, n) ans[i] = i + 1;
        In_range(i, 0, n)
        {
            int key = ans[0];
            In_range(j, 0, n)
            {
                if (g[i][j] == '0' && key < ans[j])
                {
                    ans[i] = ans[j];
                    ans[j] = key;
                }
                else
                {
                    key = ans[j];
                }
                cout << i << " " << j << " " << key << " " << "---";
                In_range(k, 0, n) cout << ans[k] << " ";
                cout << endl;
            }
        }
        In_range(i, 0, n) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
/* 
0 0 1 ---1 2 3 4 5 
0 1 1 ---2 1 3 4 5 
0 2 3 ---2 1 3 4 5 
0 3 3 ---4 1 3 3 5 
0 4 5 ---4 1 3 3 5 
1 0 4 ---4 1 3 3 5 
1 1 1 ---4 1 3 3 5 
1 2 3 ---4 1 3 3 5 
1 3 3 ---4 1 3 3 5 
1 4 5 ---4 1 3 3 5 
2 0 4 ---4 1 3 3 5 
2 1 1 ---4 1 3 3 5 
2 2 1 ---4 1 1 3 5 
2 3 1 ---4 1 3 1 5 
2 4 5 ---4 1 3 1 5 
3 0 4 ---4 1 3 1 5 
3 1 1 ---4 1 3 1 5 
3 2 1 ---4 1 1 3 5 
3 3 1 ---4 1 1 1 5 
3 4 5 ---4 1 1 1 5 
4 0 4 ---4 1 1 1 5 
4 1 1 ---4 1 1 1 5 
4 2 1 ---4 1 1 1 5 
4 3 1 ---4 1 1 1 5 
4 4 1 ---4 1 1 1 1 
4 1 1 1 1 

*/