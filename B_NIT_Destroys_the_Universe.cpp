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
        vector<int> zeros;
        In_range(i, 0, n)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                zeros.push_back(i);
        }
        int op = 0;
        In_range(i, 1, zeros.size())                
        {
            if (zeros[i] != zeros[i - 1] + 1)
                op++;
        }
        if (zeros.size())
        {
            if (zeros[0] != 0)
                op++;
            if (zeros[zeros.size() - 1] != n - 1)
                op++;
        }
        if (zeros.size() == n)
            cout << 0 << endl;
        else if (zeros.size() == 0)
            cout << 1 << endl;
        else
            cout << min(op, 2) << endl;
    }

    return 0;
}