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
        int n, m;
        cin >> n >> m;
        int arr[n];
        In_range(i, 0, n) cin >> arr[i];
        cin >> m;
        bool flag = true;
        In_range(i, 0, n - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                if (arr[i] > (m - arr[i + 1]))
                {
                    flag = false;
                    break;
                }
                else
                    arr[i + 1] = m - arr[i + 1];
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}