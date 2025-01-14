#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define For(i,s,n)for(int i=s;i<n;i++)
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
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        // if((a%2==0 && b%2==0) || (b%2 && a==2)){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        if(a%2 || (a==0 && b%2))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}