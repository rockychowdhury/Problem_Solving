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

    int n;
    cin>>n;
    int ec=0,oc=0,pc=0,nc=0;
    In_range(i,0,n){
        int x;
        cin>>x;
        if(x%2==0)ec++;
        else oc++;
        if(x>0)pc++;
        else if(x<0)nc++;
    }
    cout<<"Even: "<<ec<<endl;
    cout<<"Odd: "<<oc<<endl;
    cout<<"Positive: "<<pc<<endl;
    cout<<"Negative: "<<nc<<endl;

    return 0;
}