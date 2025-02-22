#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define In_range(i, s, n) for (int i = s; i < n; i++)
typedef pair<int, int> pii;
const int INF = 1e9 + 7;
const int N = 1e5 + 5;
const int M = 1e3 + 5;
int i, j;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<ll, ll> freq;
    map<ll, set<ll>> freqGroup;

    ll q;
    cin >> q;

    while (q--)
    {
        ll op;
        cin >> op;

        if (op == 1)
        {
            ll x;
            cin >> x;

            ll occ = freq[x]++;
            if (occ > 0)
            {
                freqGroup[occ].erase(x);
                if (freqGroup[occ].empty())
                {
                    freqGroup.erase(occ);
                }
            }
            freqGroup[occ + 1].insert(x);
        }
        else if (op == 2)
        {
            if (freq.empty())
            {
                cout << "empty" << endl;
                continue;
            }
            auto it = freqGroup.begin();
            ll min_freq = it->first;
            ll max_value = *prev(it->second.end());

            cout << max_value <<endl;

            ll eraseAmount = min_freq / 2;
            if(eraseAmount)eraseAmount++;
            freq[max_value] -= eraseAmount;

            freqGroup[min_freq].erase(max_value);
            if (freqGroup[min_freq].empty())
            {
                freqGroup.erase(min_freq);
            }

            if (freq[max_value] > 0)
            {
                freqGroup[freq[max_value]].insert(max_value);
            }
            else
            {
                freq.erase(max_value);
            }
        }
    }

    return 0;
}