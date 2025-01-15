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
        vector<int> v(n);
        In_range(i, 0, n) cin >> v[i];
        sort(v.begin(), v.end());
        vector<int> v1, v2;
        int i = 0, j = n - 1;
        while (j >= i)
        {
            if (i == j)
            {
                v1.push_back(v[i]);
                v2.push_back(v[i]);
                break;
            }
            v1.push_back(v[i]);
            v1.push_back(v[j]);
            v2.push_back(v[j]);
            v2.push_back(v[i]);
            i++;
            j--;
        }

        i = 1, j = 2;
        int sum1 = v1[0] + v1[1];
        int sum2 = v2[0] + v2[1];
        bool flag1 = true, flag2 = true;
        while (j < n)
        {
            if (v1[i] + v1[j] != sum1)
            {
                flag1 = false;
            }
            if (v2[i] + v2[j] != sum2)
            {
                flag2 = false;
            }
            i++;j++;
        }
        (flag1 || flag2) ? cout << "Yes" << endl : cout << "No" << endl;
    }

    return 0;
}