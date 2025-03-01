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
        ll n;
        cin >> n;
        ll count = 0;
        if (n == 0)
        {
            cout << 1 << endl;
            continue;
        }

        count = n / 15;

        if (n % 15 == 0)
        {
            count *= 3;
            count -= 2;
        }
        else if(n>15){
            count *= 3;
            count += min(2ll, (n % 15));
            count-=2;
        }
        count += min(3ll, n + 1);

        cout << count << endl;
    }

    return 0;
}