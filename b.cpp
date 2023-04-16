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
int idx = 0;
ll helper(int l, int r, int m, vector<int> &v)
{
    if (v.size() == 0 or l >= m)
        return 0;

    int curr = 0, canLight = l + r;
    while (curr < v.size() and v[curr] <= canLight)
        ++curr;

    v.erase(v.begin(), v.begin() + curr - 1);

    return 1 + helper(v[0] + r, r, m, v);
}

int32_t main()
{
    fast;

    int tt;
    cin >> tt;
    static int k = 0;
    while (tt--)
    {
        // knockcat

        ll m, r, n;
        cin >> m >> r >> n;

        vector<int> v(n), cal(n + 2);
        bool f = 1;

        for (auto &itr : v)
            cin >> itr;

        cal.push_back(-r);

        for (auto itr : v)
            cal.push_back(itr);

        cal.push_back(m + r);

        for (int i = 0; i < cal.size() - 1; ++i)
        {
            if (abs(cal[i + 1] - cal[i]) > (2 * r))
            {
                f = 0;
                break;
            }
        }

        if (!f)
            cout << "Case #" << ++k << ": IMPOSSIBLE" << endl;
        else
        {
            cout << "Case #" << ++k << ": " << helper(0, r, m, v) << endl;
        }
    }
    return 0;
}