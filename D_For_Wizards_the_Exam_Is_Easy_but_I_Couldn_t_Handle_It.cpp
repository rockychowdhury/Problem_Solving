#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
typedef pair<int, int> pii;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int inv_count = 0;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_inv = 0;
        int curr_r = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                curr_inv++;
                curr_r = j;
            }
        }
        if (curr_inv > inv_count || (curr_inv == inv_count && inv_count != 0 && (arr[l] < arr[i])))
        {
            inv_count = curr_inv;
            r = curr_r;
            l = i;
        }
    }

    cout << l + 1 << " " << r + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
