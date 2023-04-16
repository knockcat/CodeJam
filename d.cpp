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

        ll n;
        cin >> n;

        // ll div = n / 26;
        // ll rem = n % 26;

        // if (div == 0)
        // {

        //     char ch = rem + 'A' - 1;
        //     cout << "Case #" << ++k << ": " << ch << endl;
        // }
        // else
        // {
        //     ++div;
        //     int a = rem / div;
        //     if (rem % div != 0)
        //         ++a;
        //     char ch = a + 'A' - 1;
        //     cout << "Case #" << ++k << ": " << ch << endl;
        // }

        ll maxi = 26, l = 1;

        while (n > (maxi * l))
        {
            n -= (ll)(maxi * l);
            ++l;
        }

        int idx = (n - 1) / l;

        char ch = idx + 'A';

        cout << "Case #" << ++k << ": " << ch << endl;
    }
    return 0;
}