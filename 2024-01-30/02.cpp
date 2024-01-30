// https://www.codechef.com/problems/LITRATE

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
        float p, l;

        cin >> p >> l;

        if ((l / p) >= 0.75)
        {
            YES;
        }
        else
        {
            NO;
        }
    }
    return 0;
}