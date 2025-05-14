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
        string s;
        cin>>s;
        int o=0,z=0;
        for(auto x:s){
            if(x=='0')z++;
            else o++;
        }
        if(z>o){
            int cnt = z-o;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='0'){
                    cnt--;
                    if(cnt==0){
                        cout<<s.size()-i<<endl;
                        break;
                    }
                }
            }
        }
        else if(o>z){
            int cnt = o-z;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='1'){
                    cnt--;
                    if(cnt==0){
                        cout<<s.size()-i<<endl;
                        break;
                    }
                }
            }
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}