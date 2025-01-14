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
        int materials[n];
        int requiredM[n];
        In_range(i,0,n)cin>>materials[i];
        In_range(i,0,n)cin>>requiredM[i];

        int count =0;
        int gap=0;
        int minExtra = INT_MAX;
        In_range(i,0,n){
            if(materials[i]<requiredM[i]){
                count++;
                if(count>1)break;
                gap=requiredM[i]-materials[i];
            }
            else{
                minExtra = min(minExtra,materials[i]-requiredM[i]);
            }
        }
        if(count>1)cout<<"NO"<<endl;
        else if (minExtra>=gap) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}