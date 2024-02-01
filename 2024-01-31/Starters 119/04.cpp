// https://www.codechef.com/problems/ADVITIYA4

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
        int n, q, ans = 1, count = 1;
        char temp1, temp2;
        cin >> n >> q;

        cin >> temp1;

        for (int i = 1; i < n; i++)
        {
            cin >> temp2;
            if (temp2 == temp1)
            {
                count++;
            }
            else
            {
                count = 1;
            }
            temp1 = temp2;
            ans = max(ans, count);
        }

        cout << ans << " ";

        for (int i = 0; i < q; i++)
        {
            cin >> temp2;
            if (temp2 == temp1)
            {
                count++;
            }
            else
            {
                count = 1;
            }
            temp1 = temp2;
            ans = max(ans, count);
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}