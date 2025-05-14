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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        In_range(i,0,n) cin>>a[i];
        ll mx=0 ,mn=0,ones=0,twos=0;;
        In_range(i,0,n){
            mn+=a[i];
            mx+=((a[i]+x-1)/x);
        }
        cout<<(mn+x-1)/x<<" "<<mx<<endl;
    }

    return 0;
}