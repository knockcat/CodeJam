// KNOCKCAT

#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = 1e-9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

// This is to print to correct decimal places
// cout << fixed << setprecision(10) << ans << endl;

int32_t main()
{
    fast;

    int tt;
    cin >> tt;
    static int k = 0;
    while (tt--)
    {
        // knockcat
        vector<int> v(26);
        for (auto &itr : v)
            cin >> itr;

        int t = 65;
        map<char, int> mp;
        for (int i = 0; i < 26; ++i)
        {
            mp.insert({t, v[i]});
            ++t;
        }
        int n;
        cin >> n;
        vector<string> words(n);
        for (auto &itr : words)
            cin >> itr;

        // for (auto itr : mp)
        //     cout<< itr.first << " " << itr.second << endl;

        set<string> st;

        for (auto itr : words)
        {
            string str = itr;
            string curr;
            for (int i = 0; i < str.size(); ++i)
            {
                curr += to_string(mp[str[i]]);
            }
            // cout << curr << endl;
            st.insert(curr);
        }

        if (st.size() == n)
            cout << "Case #" << ++k << ": NO" << endl;
        else
            cout << "Case #" << ++k << ": YES" << endl;
    }
    return 0;
}