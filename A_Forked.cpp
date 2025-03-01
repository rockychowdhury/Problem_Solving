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
    cin >> t;
    while(t--){
        ll a,b,kx,ky,qx,qy;
        cin >> a >> b >> kx >> ky >> qx >> qy;
        // cout<<a<<" "<<b<<" "<<kx<<" "<<ky<<" "<<qx<<" "<<qy<<endl;
        set<pair<ll,ll>>k,q;
        k.insert(make_pair(kx+b,ky+a));
        k.insert(make_pair(kx+b,ky-a));
        k.insert(make_pair(kx-b,ky-a));
        k.insert(make_pair(kx-b,ky+a));

        k.insert(make_pair(kx+a,ky+b));
        k.insert(make_pair(kx-a,ky+b));
        k.insert(make_pair(kx-a,ky-b));
        k.insert(make_pair(kx+a,ky-b));

        q.insert(make_pair(qx+b,qy+a));
        q.insert(make_pair(qx+b,qy-a));
        q.insert(make_pair(qx-b,qy-a));
        q.insert(make_pair(qx-b,qy+a));

        q.insert(make_pair(qx+a,qy+b));
        q.insert(make_pair(qx-a,qy+b));
        q.insert(make_pair(qx-a,qy-b));
        q.insert(make_pair(qx+a,qy-b));

        int ans=0;
        for(auto [kx,ky]:k){
            for(auto [qx,qy]:q){
                if(kx==qx && ky==qy ){
                    ans++;
                    break;
                }
            }
        }
        cout<<ans<<endl;

        // for(auto [x,y]:k){
        //     cout<<x<<" "<<y<<endl;
        // }
        // cout<<endl;
        // for(auto [x,y]:q){
        //     cout<<x<<" "<<y<<endl;
        // }
        // cout<<endl;
        // cout<<"----------------------"<<endl;


    }

    return 0;
}

