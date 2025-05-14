#include <bits/stdc++.h>
using namespace std;

// Macros for convenience
#define int long long
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define endl '\n'
#define sq(a) ((a)*(a))
#define F first
#define S second
#define in_range(i, s, e) for(int i = s; i < e; i++)
#define rev_range(i, s, e) for(int i = s; i >= e; i--)
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Debugging Macros (comment in production)
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

// Typedefs for frequently used data structures
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;
const double PI = acos(-1.0);

// Modular Arithmetic
ll mod_add(ll a, ll b, ll m = MOD) { return ((a % m) + (b % m)) % m; }
ll mod_sub(ll a, ll b, ll m = MOD) { return ((a % m) - (b % m) + m) % m; }
ll mod_mul(ll a, ll b, ll m = MOD) { return ((a % m) * (b % m)) % m; }
ll mod_pow(ll a, ll b, ll m = MOD) { ll res = 1; while (b) { if (b & 1) res = mod_mul(res, a, m); a = mod_mul(a, a, m); b >>= 1; } return res; }
ll mod_inv(ll a, ll m = MOD) { return mod_pow(a, m - 2, m); }
ll mod_div(ll a, ll b, ll m = MOD) { return mod_mul(a, mod_inv(b, m), m); }

// Number Theory
vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) is_prime[j] = false;
        }
    }
    return is_prime;
}

vector<int> get_divisors(int n) {
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.pb(i);
            if (i != n / i) divisors.pb(n / i);
        }
    }
    sort(all(divisors));
    return divisors;
}

vector<pii> prime_factors(int n) {
    vector<pii> factors;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) { n /= i; cnt++; }
            factors.pb({i, cnt});
        }
    }
    if (n > 1) factors.pb({n, 1});
    return factors;
}

// Combinatorics (precompute factorials if needed)
vector<ll> fact, inv_fact;
void precompute_fact(int n, ll mod = MOD) {
    fact.resize(n + 1, 1);
    inv_fact.resize(n + 1, 1);
    for (int i = 2; i <= n; i++) fact[i] = mod_mul(fact[i - 1], i, mod);
    inv_fact[n] = mod_inv(fact[n], mod);
    for (int i = n - 1; i >= 0; i--) inv_fact[i] = mod_mul(inv_fact[i + 1], i + 1, mod);
}

ll nCr(ll n, ll r, ll mod = MOD) {
    if (r < 0 || r > n) return 0;
    return mod_mul(fact[n], mod_mul(inv_fact[r], inv_fact[n - r], mod), mod);
}

ll nPr(ll n, ll r, ll mod = MOD) {
    if (r < 0 || r > n) return 0;
    return mod_mul(fact[n], inv_fact[n - r], mod);
}

// Solution
void solve() {
    
}

signed main() {
    fast_io();
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}