// https://www.codechef.com/problems/NPRPE

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
    cin >> n;

    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }

    if (n <= 2)
    {
        cout << -1 << endl;
        return;
    }

    for (auto &i : a)
    {
        if (i == 1)
        {
            cout << 3 << " ";
        }
        else if (i == 3)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << i << " ";
        }
    }
    cout << endl;
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