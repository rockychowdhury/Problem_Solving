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

        vector<vector<int>> grid(n, vector<int>(n));
        int val = (n * n) - 1;
        for (int s = 0; s < n-1; s++)
        {
            for (int j = s; j < n-s; j++)
            {
                grid[s][j]=val;
                val--;
            }
            for(int i=s+1;i<n-s;i++){
                grid[i][n-s-1]=val;
                val--;  
            }
            for(int j=n-2-s;j>=s;j--){
                grid[n-s-1][j]=val;
                val--;
            }
            for(int i=n-2-s;i>=s+1;i--){
                grid[i][s]=val;
                val--;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                cout << grid[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}