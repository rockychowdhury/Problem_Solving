#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 2*1e5 + 5;
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
        vector<pair<int, int>> points(n);

        bool arr[N];
        int x=0,y=0;
        for(int i=0;i<N;i++)arr[i]=false;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> p;
            cin >> p.first >> p.second;
            if(p.second==0){
                arr[p.first]=true;
            }
            if(p.second==1){

            }
            points[i] = p;
        }
        
        for(int i=0;i<N;i++)
            if(arr[i])x++;
    }

    return 0;
}