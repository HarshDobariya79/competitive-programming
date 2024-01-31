// https://www.codechef.com/problems/XORRY1

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
        int n, count=0, temp;
        cin >> n;

        temp = n;

        while (n > 1){
            n = n/2;
            count++;
        }

        cerr << count << endl;

        int factor1 = pow(2,count);
        cout << temp - factor1 << " " << factor1 << endl;
    }
    return 0;
}