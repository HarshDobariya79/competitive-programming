// https://www.codechef.com/problems/WEPCH

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

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;

        int weapon_one_hits = ceil((h * 1.0) / x);
        int weapon_two_hits;

        if (ceil((h * 1.0) / y1) > k)
        {
            weapon_two_hits = ceil((h - y1 * k) / (y2 * 1.0)) + k;
        }
        else
        {
            weapon_two_hits = ceil(h / (y1 * 1.0));
        }

        cout << min(weapon_one_hits, weapon_two_hits) << endl;
    }

    return 0;
}