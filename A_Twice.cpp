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
        int freq[21];
        In_range(i,0,21)freq[i]=0;
        int arr[n];
        In_range(i,0,n){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int ans = 0;
        In_range(i,0,21){
            ans+= freq[i]/2;
        }
        cout<<ans<<endl;
    }

    return 0;
}