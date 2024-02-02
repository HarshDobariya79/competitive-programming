// https://www.codechef.com/problems/CHEFPRODUCT

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
        int n;
        cin >> n;

        if (n==2) {
            cout << 0 << endl;
            continue;
        }

        if(n%2) {
            cout << ((int)sqrtl(n) + 1) / 2 << endl;
        } else {
            cout << (int) sqrtl(n) / 2 << endl;
        }

    }
    return 0;
}