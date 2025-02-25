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

        int n, x;
        cin >> n >> x;
        if(n==1){
            cout<<x<<endl;
            continue;
        }
        if (x % 2 == 0)
        {
            In_range(i, 0, n - 1)
            {
                cout << 0 << " ";
            }
            cout << x << endl;
        }

        else
        {
            cout<<x<<" ";
            In_range(i, 0, n-1)
            {

                if (i == 0)
                {
                    cout << 0 << " ";
                    continue;
                }
                if (i % 2 == 0 && (i * 2) - 1 == x)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << i << " ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}