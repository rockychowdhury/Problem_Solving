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
        string p,s;
        cin>>p>>s;
        if(p.size()>s.size()){
            cout<<"NO"<<endl;
            continue;
        }
        char c = p[0];
        bool flag = true;
        int i=0,j=0;
        while(true){
            int c1=0,c2=0;
            while(i<p.size() && p[i]==c){
                i++;
                c1++;
            }
            while(j<s.size() && s[j]==c){
                j++;
                c2++;
            }
            if(2*c1 < c2 || c1>c2){
                flag = false;
                break;
            }
            if(i==p.size() || j==s.size()){
                break;
            }
            c=p[i];
        }
        if(i<p.size() || j<s.size()){
            flag=false;
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }   
    }

    return 0;
}