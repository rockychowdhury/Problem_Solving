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
        int n,k;
        cin>>n>>k;
        vector<pii>v(2*n);
        ll sum =0;
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            sum+=v[i].first;
            v[i].second = i+1;;
        }
        for(int i=0;i<n;i++){
            cin>>v[n+i].first;
            sum+=v[n+i].first;
            v[n+i].second = i+1;;
        }
        sort(v.begin(),v.end());
        vector<bool>state(n+1,true);
        ll remove =0;
        int p = n;
        for(auto [x,y]:v){
            if(!state[y])continue;
            sum-=x;
            p--;
            state[y] = false;
            if(p<k){
                sum++;
                break;
            }
            // cout<<x<<" "<<y<<endl;
        }
        cout<<sum<<endl;
    }

    return 0;
}