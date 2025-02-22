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
        string ans="First";
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b)ans="First";
            else ans="Second";
        }
        else{
            if(a>=b)ans="First";
            else ans="Second";
        }
        cout<<ans<<endl;
    }

    return 0;
}