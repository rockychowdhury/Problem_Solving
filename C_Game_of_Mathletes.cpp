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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        In_range(i, 0, n)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int ans=0;
        In_range(i,0,n){
            int key=v[i];
            int target=k-key;
            int l=0,r=n-1,mid;
            while(l<=r){
                mid=(l+r)/2;
                if(v[mid]==target){
                    v.erase(v.begin()+mid);
                    ans++;
                    break;
                }
                else if(v[mid]>target){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        }

    cout<<ans<<endl;
        // In_range(i,0,n)cout<<v[i]<<" ";
        // cout<<endl;
    }

    return 0;
}