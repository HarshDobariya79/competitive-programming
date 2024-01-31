// https://www.codechef.com/problems/SHORTSPELL

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
    int n;
    string s;

    cin >> n >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            cout << s.substr(0, i) + s.substr(i + 1, n) << endl;
            return;
        }
    }
    cout << s.substr(0,n-1) << endl;
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