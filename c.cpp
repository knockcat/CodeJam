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

    while (tt--)
    {
        // knockcat
        int n;
        cin >> n;
        static int k = 0;
        vector<int> v(n);

        for (auto &itr : v)
            cin >> itr;

        int one = 1;
        vector<int> ans;
        map<int, int> mp;
        vector<int> p;
        for (int i = 0; i < n; ++i)
        {
            if (mp.find(v[i]) == mp.end())
            {
                mp.insert({v[i], one});
                ans.push_back(one++);
                p.push_back(v[i]);
            }
            else
                ans.push_back(mp[v[i]]);
        }

        vector<int> res = ans;

        sort(res.begin(), res.end());

        if (ans == res)
        {
            cout << "Case #" << ++k << ": ";
            for (auto itr : p)
                cout << itr << " ";
            cout << endl;
        }
        else
            cout << "Case #" << ++k << ": IMPOSSIBLE" << endl;
    }
    return 0;
}