#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i, s, n) for (int i = s; i < n; i++)
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
        int m = 0;
        int in = 1;
        long long arr[n];
        For(i, 0, n)
        {
            cin >> arr[i];
            if (arr[i] > in)
            {
                m+=(arr[i]-in);
                in=arr[i];
            }
            in++;
        }
        cout<<m<<endl;
    }

    return 0;
}