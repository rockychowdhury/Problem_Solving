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
        int arr[n - 2];
        In_range(i, 0, n - 2) cin >> arr[i];
        bool flag = true;
        // if(n==3){
        //     cout<<"YES"<<endl;
        //     continue;
        // }
        for (int i = 1; i < n - 3; i++)
        {
            if (arr[i - 1] == 1 && arr[i]==0 && arr[i+1] == 1)
                flag = false;
        }
        flag?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

    return 0;
}