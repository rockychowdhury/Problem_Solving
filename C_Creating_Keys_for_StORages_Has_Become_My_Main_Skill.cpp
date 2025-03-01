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

        int n, x;
        cin >> n >> x;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if ((x & i )!= i)
            {
                v.resize(n);
                break;
            }
            v.push_back(i);
        }

        int cor = 0;
        for (const auto &x : v)
        {
            cor |= x;
        }
        if (cor != x)
        {
            v.pop_back();
            v.push_back(x);
        }
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}