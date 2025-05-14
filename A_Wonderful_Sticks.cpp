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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mx = n;
        int mn = 1;
        vector<int>ans(n);
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i]=='<'){
                ans[i+1]= mn;
                mn++;
            }
            else {
                ans[i+1]= mx;
                mx--;
            }
        }
        ans[0] = mx;
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}