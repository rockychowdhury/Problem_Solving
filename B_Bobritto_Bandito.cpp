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
    while(t--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int df=n-m;
        int nl=0,nr=0;
        for(int i=1;i<=m;i++){
            if(nl+nr==m)break;

            if(nr<r && r>=0){
                nr++;
            }
            else if(nl>l && l<=0)nl--;
        }
        cout<<nl<<" "<<nr<<endl;
        
    }

    return 0;
}