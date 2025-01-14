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
        int n;
        string s;
        cin>>n>>s;
        double SQRT = sqrt(n);
        int intSQRT =sqrt(n);
        if(SQRT == static_cast<int>(SQRT)){
            bool flag=true;
            for(int i=2;i<intSQRT;i++){
                for(int j=2; j<intSQRT;j++){
                    if(s[(((i-1)*intSQRT)+j)-1]=='1'){
                        flag=false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(flag){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}