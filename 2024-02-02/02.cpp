// https://www.codechef.com/problems/HATTRICK

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
    char run, streak = 0;
    string ans = "NO";

    for (int i = 0; i < 6; i++)
    {
        cin >> run;
        if (run == 'W')
        {
            streak++;

            if (streak == 3)
            {
                ans = "YES";
            }
        }
        else
        {
            streak = 0;
        }
    }
    cout << ans << endl;
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