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

int Binary_Search(vector<int> v, int key)
{
    int l = 0, r = v.size() - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (v[mid] == key)
            return mid;
        if (v[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        In_range(i, 0, n)
                cin >>
            arr[i];
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int l = 0, r = 1;
        int cnt = 0;
        while (r < n)
        {
            if (arr[r] - arr[l] <= k)
            {
                cnt++;
            }
            else
            {
                ans.push_back(++cnt);
                cnt = 0;
            }
            l++;
            r++;
        }
        ans.push_back(++cnt);
        sort(ans.begin(), ans.end());
        if (ans.size() == 0)
            cout << 0 << endl;
        else
            cout << n - ans.back() << endl;
        // for(auto x: ans)
        //     cout << x << " ";
        // cout << endl;
    }

    return 0;
}