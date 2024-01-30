// https://www.codechef.com/problems/IED

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

    int a,b,c;

    cin >> a >> b >> c;

    if (b*c >= a*c){
        cout << b*c << endl;
    }else {
        cout << a*c << endl;
    }

    return 0;
}