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
        int mx = INT_MIN;
        In_range(i, 0, n)
        {
            cin >> arr[i];
            if (arr[i] > mx)
            {
                mx = arr[i];
            }
        }
        vector<int> b, c;
        In_range(i, 0, n)
        {
            if (arr[i] == mx)
                c.push_back(arr[i]);
            else
                b.push_back(arr[i]);
        }
        if (c.size() == n)
            cout << -1 << endl;
        else
        {
            cout << b.size() << " " << c.size() << endl;
            In_range(i, 0, b.size())
            {
                cout << b[i] << " ";
            }
            cout << endl;
            In_range(i, 0, c.size())
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}