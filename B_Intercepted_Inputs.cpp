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
        int k;
        cin >> k;
        int arr[k];
        In_range(i, 0, k)
        {
            cin >> arr[i];
        }
        int N = k - 2;
        vector<int> v;
        for (int i = 1; i <= sqrt(N); ++i)
        {
            if (N % i == 0)
            {
                v.push_back(i);
                v.push_back(N / i);
            }
        }
        In_range(i, 0, v.size() - 1)
        {
            // cout<<v[i];
            int n = v[i];
            int m = v[i + 1];
            bool flagN = false;
            bool flagM = false;
            In_range(j, 0, k)
            {
                if (arr[j] == n)
                    flagN = true;
                if (arr[j] == m)
                    flagM = true;
            }
            if (flagM && flagN)
            {
                cout << n << " " << m << endl;
                break;
            }
            i++;
        }
        // for(int i=0;i<v.size();i++)cout<<v[i];
        // cout<<endl;
    }

    return 0;
}