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
        vector<int> arr;
        ll curr = 1, prev = 0;
        bool flag = false;
        In_range(i, 1, n + 1)
        {
            int x = i;
            if (x == ((6 * curr) - prev + 2) || i == 1)
            {
                if (i != 1)
                {
                    ll tmp = curr;
                    curr = (6 * curr) - prev + 2;
                    prev = tmp;
                }
                if (i + 1 <= n)
                {
                    arr.push_back(i + 1);
                    arr.push_back(i);
                }
                else
                {
                    flag = true;
                    break;
                }
                i++;
                continue;
            }
            arr.push_back(i);
        }

        // for(int i=1;i<arr.size();i++){
        //     arr[i]+=arr[i-1];
        // }
        if (flag)
        {
            cout << -1 << endl;
            continue;
        }
        for (auto x : arr)
        {
            cout << x << " ";
        }
        cout << endl;
        // cout << arr.size() << endl;
    }

    return 0;
}