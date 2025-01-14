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
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        long long revPreSum[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        revPreSum[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            revPreSum[i]=revPreSum[i+1]+arr[i];
        }
        long long ans=0;
        for(int i=0;i<n-1;i++){
            ans += arr[i]*revPreSum[i+1];
        }
        long long div = ((n*n) - n)/2;
        cout<<(ans/div)%INF<<endl;
    }
    

    return 0;
}