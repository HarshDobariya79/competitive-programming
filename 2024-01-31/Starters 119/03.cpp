// https://www.codechef.com/problems/ADVITIYA3

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
        int n, k, ans = INT_MAX;

        cin >> n >> k;

        vector<int> a(n);

        for (auto &i : a)
        {
            cin >> i;
        }

        sort(a.rbegin(), a.rend());

        if (a[0] < k)
        {
            cout << -1 << endl;
            continue;
        }

        a.erase(std::remove_if(a.begin(), a.end(), [k](int x)
                               { return x < k; }),
                a.end());

        for (auto &i : a)
        {
            ans = min(ans, i % k);
        }

        cout << ans << endl;
    }
    return 0;
}