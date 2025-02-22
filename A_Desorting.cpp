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
        bool sorted = true;
        In_range(i, 0, n)
        {
            cin >> arr[i];
            if (i && arr[i - 1] > arr[i])
                sorted = false;
        }
        bool parity = true;
        int dist = INF;
        if (!sorted)
        {
            cout << 0 << endl;
            continue;
        }
        In_range(i, 1, n)
        {
            dist = min(arr[i] - arr[i - 1], dist);
        }
        if (dist % 2)
        {
            cout << (dist + 1) / 2 << endl;
        }
        else
            cout << dist / 2 + 1 << endl;
    }

    return 0;
}