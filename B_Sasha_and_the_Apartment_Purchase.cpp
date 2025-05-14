#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i,s,n)for(int i=s;i<n;i++)
typedef pair<int,int>pii;
const int INF=1e9+7;
const int N=1e5+5;
const int M=1e3+5;
int i,j;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        In_range(i,0,n){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n%2==1 && k==0){
            cout<<2<<endl;
            continue;
        }
        ll tk = k;
        if((k%2==1 && n%2==0)||(k%2==0 && n%2==1))--k;
        ll i = ((n-k)/2)-1;
        ll j= i+k+1;
        ll ans = abs(v[j]-v[i]+1);
        if(n%2==1 && tk%2==1){
            ll t = 2;
            ans = max(t,ans);
        }
        cout<<ans<<endl;
    }

    return 0;
}