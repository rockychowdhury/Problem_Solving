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
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        ll cnt2=0,cnt3=0;
        ll tmp=n;
        while((n%2==0) && n){
            n/=2;
            cnt2++;
        }
        n=tmp;
        while((n%3==0) && n){
            n/=3;
            cnt3++;
        }
        // cout<< "2-->" << cnt2 << " 3-->" << cnt3 << endl;
        if(cnt2>cnt3 || ((pow(2,cnt2)*pow(3,cnt3))!=tmp)){
            cout << -1 << endl;
            continue;
        }
        cout << 2*cnt3-cnt2 << endl;
    }

    return 0;
}