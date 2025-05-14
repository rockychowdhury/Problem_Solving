#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define endl '\n'
#define sq(a) (a)*(a)
#define F first
#define S second
#define In_range(i, s, e) for (int i = s; i < e; i++)
#define Rev_range(i, s, e) for (int i = s; i >=e; i--)
typedef pair<int, int> pii;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
void fast_io() {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0);}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll binpow(ll a, ll b, ll mod = MOD) {ll res = 1; while (b > 0) { if (b & 1) res = (res * a) % mod; a = (a * a) % mod; b >>= 1;} return res;}
ll mod_inv(ll a, ll mod = MOD) {return binpow(a, mod - 2, mod);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mod_inv(b, m), m) + m) % m;}  //only for prime m
vector<bool> sieve(int n) {vector<bool> is_prime(n + 1, true); is_prime[0] = is_prime[1] = false; for (int i = 2; i * i <= n; i++) {if (is_prime[i]) {for (int j = i * i; j <= n; j += i) {is_prime[j] = false;}}}return is_prime;}
vector<int> get_divisors(int n) {vector<int> divisors;for (int i = 1; i * i <= n; i++) {if (n % i == 0) {divisors.pb(i);if (i != n / i) divisors.pb(n / i);}}sort(all(divisors));return divisors;}
vector<pair<int, int>> prime_factorization(int n) {vector<pair<int, int>> factors; for (int i = 2; i * i <= n; i++) {if (n % i == 0) {int count = 0;while (n % i == 0) {n /= i;count++;}factors.pb({i, count});}}if (n > 1) factors.pb({n, 1});return factors;}
vector<ll> fact, inv_fact;
void precompute_factorials(int n, ll mod = MOD) {fact.resize(n + 1, 1);inv_fact.resize(n + 1, 1);for (ll i = 2; i <= n; i++)fact[i] = (fact[i - 1] * i) % mod;inv_fact[n] = mod_inv(fact[n], mod);for (ll i = n - 1; i >= 1; i--)inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % mod;}
ll nCr(ll n, ll r, ll mod = MOD) {if (r > n || r < 0) return 0;return (fact[n] * inv_fact[r] % mod) * inv_fact[n - r] % mod;}
ll nPr(ll n, ll r, ll mod = MOD) {if (r > n || r < 0) return 0;return (fact[n] * inv_fact[n - r]) % mod;}


void solve() {

    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    ll mx =0;
    In_range(i,0,n){
        cin>>arr[i];
        if(i && (i!=n-1) && (mx<arr[i]))mx=arr[i];
    }
    ll ans = max(mx+arr[0], mx +arr[n-1]);
    ans = max(ans, arr[0]+arr[n-1]);
    if(k==1){
        cout<<ans<<endl;
        return;
    }
    else{
        sort(rall(arr));
        ans =0;
        In_range(i,0,k+1)ans+=arr[i];
        cout<<ans<<endl;
    }
}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}