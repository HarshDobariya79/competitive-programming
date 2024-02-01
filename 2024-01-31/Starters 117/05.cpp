// https://www.codechef.com/problems/EQUAL2

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
        int a, b;

        cin >> a >> b;

        int diff = abs(a-b);
        int n = sqrtl(2*diff);

        while (n*(n+1)/2 < diff) n++;
        while ((n*(n+1)/2)%2 != diff%2) n++;

        cout << n << endl;
    }
    return 0;
}

// n^2 + n >= 2*d
// n is aproximately (2*d)^0.5