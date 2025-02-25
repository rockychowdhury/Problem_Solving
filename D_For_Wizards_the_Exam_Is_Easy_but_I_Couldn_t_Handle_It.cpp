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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        vector<int> arr(n);
        In_range(i, 0, n) cin >> arr[i];
        ordered_set<int> pbds;
        int cnt = 0, l = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            pbds.insert(arr[i]);
            int key = pbds.order_of_key(arr[i]);
            if (key > cnt)
            {
                cnt = key;
                l = i;
            }
        }
        if (cnt == 0)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        int r = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] < arr[l])
            {
                r = i;
                break;
            }
        }
        cout << l + 1 << " " << r + 1 << endl;
    }

    return 0;
}
