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
        int arr[n][n];
        In_range(i,0,n){
            In_range(j,0,n){
                cin>>arr[i][j];
            }
        }
        vector<int>p(2*n,0);
        In_range(i,1,n+1){
            In_range(j,1,n+1){
                p[i+j-1]=arr[i-1][j-1];
            }
        }
        ll csum=0;
        In_range(i,0,2*n){
            csum+=p[i];
        }
        ll sum = ((2*n)*((2*n)+1))/2;
        p[0]=sum-csum;
        In_range(i,0,2*n)cout<<p[i]<<" ";
        cout<<endl;
    }

    return 0;
}