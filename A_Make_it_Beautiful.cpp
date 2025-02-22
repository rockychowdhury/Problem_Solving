#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

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
        int arr[n];
        int mx = 0, mn = INF;
        In_range(i, 0, n)
        {
            cin >> arr[i];
            if (arr[i] > mx)
                mx = arr[i];
            if (arr[i] < mn)
                mn = arr[i];
        }
        if(mx==mn){
            no;
            continue;
        }
        sort(arr, arr + n, greater<int>());
        if(arr[1]==mx){
            swap(arr[i+1],arr[n-1]);
        }
        yes;
        In_range(i, 0, n)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}