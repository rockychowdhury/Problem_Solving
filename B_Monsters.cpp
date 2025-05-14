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
bool cmp(pii a,pii b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}
bool cmp1(pii a,pii b){
    return a.second<b.second;
}
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
        vector<int> v(n);
        vector<pii> divs;
        vector<pii>rems;
        In_range(i,0,n){
            cin>>v[i];
            if(v[i]%k==0){
                divs.push_back({v[i],i+1});
            }
            else{
                int rem = v[i]%k;
                rems.push_back({rem,i+1});
            }
        }
        sort(divs.begin(),divs.end(),cmp1);
        sort(rems.begin(),rems.end(),cmp);
        for(auto[x,y]:divs){
            cout<<y<<" ";
            // cout<<x<<" "<<y<<endl;
        }
        for(auto[x,y]:rems){
            cout<<y<<" ";
            // cout<<x<<" "<<y<<endl;
        }
        cout<<endl;

    }

    return 0;
}