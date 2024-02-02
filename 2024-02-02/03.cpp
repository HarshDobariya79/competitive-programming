// https://www.codechef.com/problems/ACCESS

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

void solve()
{
    int n, x, remainingSwipes = 0;
    cin >> n >> x;

    string s;
    cin >> s;

    for (auto &i : s)
    {
        if (i == '1')
        {
            remainingSwipes = x;
        }
        else
        {
            if (remainingSwipes == 0)
            {
                NO;
                return;
            }
            remainingSwipes--;
        }
    }
    YES;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}