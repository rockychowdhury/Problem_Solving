// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define ll long long
// #define In_range(i, s, n) for (int i = s; i < n; i++)
// typedef pair<int, int> pii;
// const int INF = 1e9 + 7;
// const int N = 1e5 + 5;
// const int M = 1e3 + 5;
// int i, j;
// bool isValid(int arr[], int n, int mid, int x)
// {
//     int dis = arr[0];
//     In_range(i, 0, n - 1)
//     {
//         dis = max(dis, abs(arr[i] - arr[i + 1]));
//     }
//     dis = max(dis, (2 * abs(arr[n - 1] - x)));
//     return dis <= mid;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> n >> x;
//         int arr[n];
//         In_range(i, 0, n) cin >> arr[i];
//         int l = 0, r = INT_MAX, ans = 0;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (isValid(arr, n, mid, x))
//             {
//                 ans = mid;
//                 r = mid - 1;
//             }
//             else
//                 l = mid + 1;
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }

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
        vector<int>v;
        In_range(i,0,n){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int back = v.back();
        int front = v.front();
        int i=0,j=1,ans=max((2*(x-back)),front);
        while(j<n){
            ans=max(ans,abs(v[j]-v[i]));
            i++;
            j++;
        }
        cout<<ans<<endl;
    }

    return 0;
}