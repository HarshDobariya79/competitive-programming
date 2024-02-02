// https://www.codechef.com/problems/EXACTSAVINGS

// FAILED / TLE

#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
#define cerr \
    if (0)   \
    cerr
#endif

#define MOD 998244353
#define int long long int
#define endl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solver(vector<int> &prices, int start, int &n, int idealEarning, int &ans, int &hourlyEarning)
{
    if (idealEarning % hourlyEarning == 0)
    {
        ans = min(ans, idealEarning / hourlyEarning);
        cerr << idealEarning << " " << start << " " << prices[start] << " " << ans << endl;
        return;
    }
    
    if (hourlyEarning * ans < idealEarning) return;

    for (int i = start; i < n; i++)
    {
        solver(prices, i + 1, n, idealEarning + prices[i], ans, hourlyEarning);
        solver(prices, i + 1, n, idealEarning, ans, hourlyEarning);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, z;
        cin >> n >> x >> z;

        vector<int> prices(n);

        for (auto &i : prices)
        {
            cin >> i;
        }

        int ans = LONG_LONG_MAX;

        if (z % x == 0)
        {
            cout << z / x << endl;
            continue;
        }

        solver(prices, 0, n, z, ans, x);
        if (ans == LONG_LONG_MAX)
        {
            cout << -1 << endl;
            continue;
        }
        cout << ans << endl;
        cerr << endl;
    }
    return 0;
}