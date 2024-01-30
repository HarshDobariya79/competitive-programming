// https://www.codechef.com/problems/GCDPERM

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
        int n, m;
        cin >> n >> m;

        int start = n/m;

        for(int i=1; i<=m; i++){
            cout << i*start << " ";
        }

        cout << endl;
    }
    return 0;
}