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
        int t;
        vector<int> arr(n-1);
        In_range(i,0,n){
            if(i == 0){
                cin>>t;
            }
            else{
                cin>>arr[i-1];
            }
        }
        int need = ((n+1)/2)-1;
        int sm=0,po=0,pob=0;
        int pt = abs(t);
        int nt = (-1)*t;
        In_range(i,0,n-1){
            if(arr[i]<pt){
                sm++;
                if(arr[i]*(-1) > pt)
                    pob++;
            }
            else if((arr[i] * (-1))<pt){
                po++;
            }
        }
        if((sm == need) || (sm<need && (po+sm) >=need)){
            cout<<"YES"<<endl;
            continue;
        }
        sm=0,po=0,pob=0;
        In_range(i,0,n-1){
            if(arr[i]<nt){
                sm++;
                if(arr[i]*(-1) > nt)
                    pob++;
            }
            else if((arr[i] *(-1) ) < nt){
                po++;
            }
        }
        if((sm == need) || (sm<need && (po+sm )>=need) ){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }

    return 0;
}