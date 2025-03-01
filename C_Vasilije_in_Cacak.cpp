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

    vector<ll>pre_sum(2*10e5+5,0);
    for(ll i=1;i<=2*10e5;i++){
        pre_sum[i]=pre_sum[i-1]+i;
    }
    


    int t; cin >> t;

    while(t--){
        ll n,k,x;
        cin >> n >> k >> x;
        if(pre_sum[k]<=x && x<=(pre_sum[n]-pre_sum[n-k])){
            cout << "YES"<< endl;
            continue;
        }
        cout << "NO" << endl;
    }

    return 0;
}