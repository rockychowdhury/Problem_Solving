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
        vector<ll> arr(n);
        In_range(i, 0, n) cin >> arr[i];
        sort(arr.begin(), arr.end());
        ll segment = 1, cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
                cnt++;
            else
            {
                segment = max(cnt, segment);
                cnt = 1;
            }
        }
        segment = max(cnt, segment);
        // cout << segment << endl;
        ll r = n - segment;
        if(r==0){
            cout<<r<<endl;
            continue;
        }
        ll op = 0;
        while(r>0){
            op+=(1+min(segment,r));
            segment*=2;
            r=n-segment;
        }
        cout<<op<<endl;
    }

    return 0;
}