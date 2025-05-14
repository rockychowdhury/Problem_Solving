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
        ll temp = n;
        ll two = 0, three = 0;
        // while (n % 2 == 0)
        // {
        //     two++;
        //     n /= 2;
        // }
        // while (n % 3 == 0)
        // {
        //     three++;
        //     n /= 3;
        // }
        // cout<<two<<" "<<three<<endl;
        // if(!two && !three){
        //     cout<<-1<<endl;
        //     continue;
        // }

        if(n%2 || n==2){
            cout<<-1<<endl;
            continue;
        }
        ll mn = ceil((1.0 * n)/(6.0));
        ll mx = n/4;
        cout<<mn<<" "<<mx<<endl;
    }

    return 0;
}